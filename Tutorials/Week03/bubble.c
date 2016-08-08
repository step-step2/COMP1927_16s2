#include "Sorts.h"
#include <stdlib.h>

void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void bubble(int* arr, int n) {
  int swapped = 0;
  for (int i = 0; i < n - 1; ++i) {
    swapped = 0;
    for (int j = i + 1; j < n; ++j) {
      if (arr[i] > arr[j]) {
        swap(arr + i, arr + j); 
        swapped = 1;
      }
    }
    if (!swapped) break;
  }
}
