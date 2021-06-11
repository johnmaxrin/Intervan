#include "../includes/lexer.h"
#include <stdio.h>
#include <ctype.h>

Token* lexer(char *prgm){
  int i = 0;
  Token *token = initToken();
  Token *head = token;

  while(prgm[i]){

    if(isdigit(prgm[i]))
      token = makeToken(token,2,prgm[i]);

    switch (prgm[i++]) {
      case '+':
      token = makeToken(token,1,'+');
      break;

    }


  }

  return head;
}
