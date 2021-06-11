#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "includes/lexer.h"

void main(){
  char *prgm = (char *)calloc(1,sizeof(char *));
  while(1){
    printf("Intervan >> ");
    scanf("%s",prgm);
    Token *start =  lexer(prgm);
    printToken(start);
  }
}
