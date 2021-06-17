#ifndef PARSERSTRUCT
#define PARSERSTRUCT

#include "token.h"
void parse(Token* token);
Token* S(Token* token);
Token* T(Token* token);
Token* O(Token* token);
Token* consumeDigit(Token* token);
Token* consumeOperator(Token* token);
#endif
