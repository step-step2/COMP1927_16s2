#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BinSum.h"

// You are given 2 strings in the form of binary numbers, so something like
// 1001
// 11
// The two strings are not necessarily the same length
// Your job is to fill 'res' with the resultant sum of the two binary strings,
// again, as a string
// So after running the function on the above two binary strings, res needs
// to contain: '1100'
// Try not to fill all the cases immediately; start basic, work your way up
// from there. Your first job is to be get a working version on a basic case

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
