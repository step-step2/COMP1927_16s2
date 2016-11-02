#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Tests.h"

int main() {
  printf("Running findValTests\n");
  findValTests();
  printf("Passed findVal!\n");
  printf("--------------------------------------\n");

  printf("Running kthSmallestTests\n");
  kthSmallestTests();
  printf("Passed kthSmallestTests!\n");
  printf("--------------------------------------\n");

  printf("You passed all the tests. Good for you.\n");
  return 0;
}

