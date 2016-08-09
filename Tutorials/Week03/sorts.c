#include "Sorts.h"
#include <stdio.h>
#include <stdlib.h>

void usage();

typedef struct x {
  int q;
} X;

int main(int argc, char* argv[]) {
  X* q;
  q->q = 1;

  char x[4] = {0}; 
  x[2] = 1;
  int* w = (int*)x;

  struct x* q;
  q.q = 1;



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

  for (int i = 0; i < numVals; ++i) printf("%d\n", arr[i]);

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
