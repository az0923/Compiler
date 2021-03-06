/* lex1.c         14 Feb 01; 31 May 12       */

/* This file contains code stubs for the lexical analyzer.
   Rename this file to be lexanc.c and fill in the stubs.    */

/* Copyright (c) 2001 Gordon S. Novak Jr. and
   The University of Texas at Austin. */

/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "token.h"
#include "lexan.h"

char *operators[] = {"+", "-", "*", "/", ":=", "=", "<>", "<", "<=",
 ">=", ">", "^", ".", "and", "or", "not", "div", "mod", "in"};

 char *dilimiters[] = {",", ";", ":", "(", ")", "[", "]", ".."};

char *reserve[] = {"array", "begin", "case", "const", "do", "downto",
 "else", "end", "file", "for", "function", "goto", "if", "label", "nil",
 "of", "packed", "procedure", "program", "record", "repeat", "set", "then"
 "to", "type", "until", "var", "while", "with"};

/* This file will work as given with an input file consisting only
   of integers separated by blanks:
   make lex1
   lex1
   12345 123    345  357
   */

/* Skip blanks and whitespace.  Expand this function to skip comments too. */
void skipblanks ()
  {  int c;
     int cc;
     int comp;
	int done = 0;

    while ((c = peekchar()) != EOF && (c == ' ' || c == '\n' || c == '\t' ||
      c == '{' || (c == '(' && ((cc = peek2char()) == '*')))){
       //handeling { } comment type
	     if(c == '{')
        while(c = peekchar() != '}') 
			      getchar();
       //handeling (* *) comment type
	if(c == '(' && cc == '*'){
        	getchar();
		while(!done) {
			getchar();
			if(peek2char() == ')' && (peekchar() == '*')){
		     		getchar();
				done = 1;
			}
	     	comp = 1;
			}
		done = 0;
	      }
        //move past * at end of (* *)
        if(comp)
           //getchar(); <<<<<<<<<<--------------------- dont know if i need this.. 
          //causing me to loose first character off everyword past first word
         getchar();
	    }
    }

/* Get identifiers and reserved words */
TOKEN identifier (TOKEN tok)
  { char name[15];
    char c = peekchar();
    int count = 0, which;

    //check identifier begins with a letter
    if(c != EOF && CHARCLASS[c] == ALPHA) {
        c = getchar();
        name[count] = c;
        count++;
      }
    else
        return tok;

    while((c = peekchar()) != EOF && (count <= 15) && (CHARCLASS[c] == ALPHA || CHARCLASS[c] == NUMERIC)) {
      c = getchar();
      name[count] = c;
      count++;
      c = peekchar();
    }
    name[15] = 0;
    name[count] = 0;
    strcpy(tok->stringval, name);
    tok->datatype = STRINGTYPE;

    if((which = check(name, 0)) >= 0){
      //check if reserved word
      tok->tokentype = RESERVED;
      tok->whichval = which;
    }
    else if((which = check(name, 1)) >= 0){
      //check if operator reserve word
      tok->tokentype = OPERATOR;
      tok->whichval = which;
    }
    else{
      //identifier is normal
      tok->tokentype = IDENTIFIERTOK;
    }
  }

TOKEN getstring (TOKEN tok)
  {
    char word[15];
    int index = 0, done = 0;
    getchar();
    int c;
    tok->tokentype = STRINGTOK;
    tok->datatype = STRINGTYPE;
    while(!done){
      c = getchar();
      if(peekchar() != '\'') {
          if(index < 15) {
            word[index] = c;
            index++;
            }
        }
      else if(peekchar() == '\''){
        if(peek2char() == '\''){
          getchar();
          word[index] = c;
          index++;
        }
        else {
          getchar();
          if(index < 15) {
            word[index + 1] = 0;
            word[index] = c;
          }
          done = 1;
        }
        word[15] = 0;
      }
    }
    strcpy(tok->stringval, word);
  }

TOKEN special (TOKEN tok)
  {
    int c, cc;
    int which;
    char spec[3];
	c = getchar();
	cc = peekchar();
	if(cc != '>' && cc != '=' && cc != '.') {
		spec[0] = c;
		spec[1] = 0;
		}
	else{
		cc = getchar();
		spec[2] = 0;
		spec[1] = cc;
		spec[0] = c;
	//	printf("spec[0] = %c, spec[1] = %c\n", spec[0] ,spec[1]);
	}

        if((which = check(spec, 1)) >= 0){
         // printf("is an op %d\n", which);
          tok->tokentype = OPERATOR;
          tok->whichval = which;
        }
        else if((which = check(spec, 2)) >= 0) {
           // printf("is a delim %d\n", which);
            tok->tokentype = DELIMITER;
            tok->whichval = which;
    }
  }

/* Get and convert unsigned numbers of all types. */
TOKEN number (TOKEN tok)
  { long num;
    int  c, charval;
    num = 0;

    while ( (c = peekchar()) != EOF && CHARCLASS[c] == NUMERIC){
	  c = getchar();
          charval = (c - '0');
          num = num * 10 + charval;
        }

    tok->tokentype = NUMBERTOK;
    tok->datatype = INTEGER;
    tok->intval = num;
    return (tok);
  }

//helper method to compare input to operators, delimiters and reserved words
int check (char * arg, int opp) {
  int index = 0;
  int size = 28;
  char ** look = reserve;
  if(opp == 1) {
    size = 19;
    look = operators;
  }
  else if(opp == 2){
    size = 8;
    look = dilimiters;
  }
  for(index; index < size; index++) {
   // printf("checking shit %c \n", *look[index]);
    if(strcmp(arg, look[index]) == 0) {
       // printf("returning %d\n", index + 1);
        return (index + 1);
      }
    }
  return -1;
}
