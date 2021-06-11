#include "../includes/token.h"
#include <stdlib.h>
#include <stdio.h>

Token* initToken(){
    Token *init = (Token*)calloc(1,sizeof(struct TokenStruct*));

    init->type = 0;
    init->value = '$';
    init->next = NULL;
    return init;
  }

Token* makeToken(Token* prevToken, int type, char value){
  Token *token = (Token*)calloc(1,sizeof(struct TokenStruct*));
  token->type = type;
  token->value = value;
  prevToken->next = token;

  return token;
}

void printToken(Token *start){
  printf("%s\n","--Printing--");
  while(start != NULL){
    printf("Type -> %d Value -> %c\n",start->type, start->value);
    start = start->next;
  }


}
