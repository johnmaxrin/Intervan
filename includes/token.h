#ifndef TOKENSTRUCT
#define TOKENSTRUCT
typedef struct TOKEN_STRUCT{
  enum{
    START,
    DIGIT,
    PLUS
  }type;

  char value;
  struct TOKEN_STRUCT *next;
}Token;


Token* initToken();
Token* makeToken(Token* prevToken, int type, char value);
void printToken(Token *start);

#endif
