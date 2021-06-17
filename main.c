#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "includes/lexer.h"
#include "includes/parser.h"

void main(){

  printf("\n%s\n\n","--Welcome to the Alpha Version of Intervan.--");
  char *prgm = (char *)calloc(1,sizeof(char *));
  while(1){
    printf("Intervan >> ");
    scanf("%s",prgm);
    Token *start =  lexer(prgm);
    printToken(start);
    parse(start);
  }
}
