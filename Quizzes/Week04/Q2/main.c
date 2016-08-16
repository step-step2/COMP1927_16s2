/**
 * This is where everything starts
 * Don't touch this bit =)
 */

#include <stdlib.h>
#include <stdio.h>
#include "Quack.h"

void printUsage();

int main(int argc, char* argv[]) {
  if (argc != 1) {
    printUsage();
    exit(1);
  }

  int v;
  Quack q = createQuack();

  while (scanf("%d", &v) != EOF) {
    pushQ(q, v);
  }

  while (sizeQ(q) != 1) {
    printf("%d ", popQ(q));
  }
  if (sizeQ(q) != 1) {
    printf("%d", popQ(q));
  }

  return 0;
}

void printUsage() {
  printf("I am disappointed\n./solution\n");
}
