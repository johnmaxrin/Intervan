#ifndef PARSERSTRUCT
#define PARSERSTRUCT

#include "token.h"
void parse(Token* token);
void S(Token* token);
void T(Token* token);
void O(Token* token);
Token* consumeDigit(Token* token);
Token* consumeOperator(Token* token);
#endif
