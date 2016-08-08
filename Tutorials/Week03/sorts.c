#include "Sorts.h"
#include <stdio.h>
#include <stdlib.h>

void usage();

int main(int argc, char* argv[]) {
  if (argc != 3) {
    usage();
    exit(1);
  }

  void (*sorts[6])(int* arr, int n) =
  {
    bubble,
    insertion,
    selection,
    merge,
    quick,
    shell
  };

  int sort = atoi(argv[1]);
  int numVals = atoi(argv[2]);
  int arr[numVals];

  for (int i = 0; i < numVals; ++i) scanf("%d", &(arr[i]));
  
  sorts[sort](arr, numVals);

  return 0;
}

void usage() {
  printf("Select from the following sorts:\n\
      \t0: Bubble\n\
      \t1: Insertion\n\
      \t2: Selection\n\
      \t3: Merge\n\
      \t4: Quick\n\
      \t5: Shell\n\
      Then use with ./sorts X #Values\n");
}
