#include "../includes/parser.h"
#include <stdio.h>

/*
      Contest Free Grammar
      S -> TOT | e
      T -> DIGIT
      O -> + | -

*/

void parse(Token *token){

  Token *start = token;
  while(start){

    S(start);
    //start = start->next;
  }
}

void S(Token *token){
  if(token->next == NULL)
    printf("%s\n","--Accepted--");
  else
    T(token);
}

void T(Token *token){
  if(token->type == 1)
      O(consumeDigit(token));
  else if(token->next == NULL)
    printf("%s\n","--Accepted--");
  else
    printf("%s\n","--Error in Parsing--");
}

void O(Token *token){
  if(token->type == 2)
    T(consumeOperator(token));
  else if(token->next == NULL)
    printf("%s\n","--Error in Parsing--");
}

Token* consumeDigit(Token *token){
  if(token->type == 1)
    return token->next;
  else
    printf("%s\n","--Error--");
}

Token* consumeOperator(Token *token){
  if(token->type == 2)
    return token->next;
  else
    printf("%s\n","--Error--");
}
