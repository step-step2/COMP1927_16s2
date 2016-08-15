#include <stdio.h>
#include <stdlib.h>
#include "BinSum.h"

void binSum(char* bin1, char* bin2, char* res) {
  // Remove the following set of lines when you begin working on the
  // solution; they just avoid the "unused variable" warning
  (void)bin1; 
  (void)bin2; 
  (void)res;
}

// Very hacky bit->int function
// Returns 1 if the bit is '1', otherwise 0
int btoi(char ch) {
  return ch == '1';
}
