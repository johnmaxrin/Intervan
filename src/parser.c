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
    if(token->next == NULL)
      printf("%s\n","--Success--");
  }
}

void S(Token *token){
  if(token->next == NULL)
    printf("%s\n","--Error--");
  else
    T(token->next);
}

void T(Token *token){
  if(token->next != NULL){
    token = consumeDigit(token);
    O(token);
  }

}

void O(Token *token){
  if(token->next != NULL){
    token = consumeOperator(token);
    T(token);
  }
}

Token* consumeDigit(Token *token){
  if(token->type == 2)
    return token->next;
  else
    printf("%s Invalid Token %c type %d\n","--Error--",token->value,token->type);
}

Token* consumeOperator(Token *token){
  if(token->type == 1)
    return token->next;
  else
    printf("%s\n","--Error--");
}
