#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "BinSum.h"

int binSumLen(int x) {
  return log(x) / log(2);
}

// 2 Solutions:
//  1. Sum the two numbers into an int, translate int -> binary string
//  2. Go through the string bit by bit, adding the result to the end of the
//     'res' string
void binSum(char* bin1, char* bin2, char* res) {

  if (strlen(bin1) == 0) {
    strcpy(res, bin2);
    return;
  } else if (strlen(bin2) == 0) {
    strcpy(res, bin1);
    return;
  }

  int int1 = 0;
  int int2 = 0;
  int intRes = 0;
  int i = 0, p = 0;

  int q = 0b1110 ^ 0b110;

  for (p = 0, i = strlen(bin1) - 1; i >= 0; --i, ++p) {
    int1 += (btoi(bin1[i]) << p);
  }
  for (p = 0, i = strlen(bin2) - 1; i >= 0; --i, ++p) {
    int2 += (btoi(bin2[i]) << p);
  }

  intRes = int1 + int2;
  p = binSumLen(intRes);

  res[p + 1] = '\0';
  for (i = 0; i <= p; ++i) {
    res[p - i] = ((intRes & (1 << i)) >> i) + '0';
  }
}

// Very hacky bit->int function
// Returns 1 if the bit is '1', otherwise 0
int btoi(char ch) {
  return ch == '1';
}
