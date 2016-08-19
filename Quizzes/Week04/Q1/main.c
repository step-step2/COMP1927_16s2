/**
 * This is where everything starts
 * Don't touch this bit =)
 */

#include <stdlib.h>
#include <stdio.h>
#include "BinSum.h"

void printUsage();

int main(int argc, char* argv[]) {
  if (argc != 1) {
    printUsage();
    exit(1);
  }

  char bin_str1[128] = {0};
  char bin_str2[128] = {0};
  scanf("%s", bin_str1);
  scanf("%s", bin_str2);

  char bin_sum[129] = {0};
  binSum(bin_str1, bin_str2, bin_sum);

  printf("%s\n", bin_sum);
  return 0;
}

void printUsage() {
  printf("I am disappointed\n./bin_sum BinaryStr1 BinaryStr2\n");
}
