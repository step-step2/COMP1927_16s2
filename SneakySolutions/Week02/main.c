/**
 * This is where everything starts
 * Don't touch this bit =)
 */

#include <stdlib.h>
#include <stdio.h>
#include "Balanced.h"

void printUsage();

int main(int argc, char* argv[]) {
  if (argc != 1) {
    printUsage();
    exit(1);
  }

  char my_brackets[128];
  scanf("%s", my_brackets);

  if (isValid(my_brackets)) {
    printf("valid\n");
  } else {
    printf("invalid\n");
  }

  return 0;
}

void printUsage() {
  printf("I am disappointed\n./brackets\n");
}
