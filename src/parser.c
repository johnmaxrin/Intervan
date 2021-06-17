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


    if(S(start)->next == NULL)
      printf("%s\n","--Success in Parsing--");

}

Token* S(Token *token){
  if(token->next == NULL)
    printf("%s\n","--Error in start--");
  else
    return(T(token->next));
}

Token* T(Token *token){
  if(token->next != NULL){
    token = consumeDigit(token);
    return(O(token));
  }
  return token;
}

Token* O(Token *token){
  if(token->next != NULL){
    token = consumeOperator(token);
    return(T(token));
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
