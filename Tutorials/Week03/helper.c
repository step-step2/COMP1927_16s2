#include <stdio.h>
#include <stdlib.h>
#include "Sorts.h"

void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// hi value will be destroyed
void shuffle(int* arr, int lo, int hi) {
  int t = arr[lo];
  for (int i = lo + 1; i < hi - 1; ++i) swap(&t, arr + i);
}
