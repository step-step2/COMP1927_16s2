#include "Sorts.h"
#include <stdlib.h>

// Shell sort works on splitting the list into sorted values,
// seperated by some n
// So if n was 5, the first pass will sort:
// arr[0], arr[5], arr[10]... RELATIVE TO EACH OTHER
// Same thing will be done for 
// { arr[1], arr[6], arr[11] }
// { arr[2], arr[7], arr[12] }
//
// We steadily reduce the gaps until 1

#define NUM_GAPS 7

void shell(int* arr, int n) {
  int gaps[NUM_GAPS] = {4096, 1024, 256, 64, 16, 4, 1};
  
  // For each gap in gaps
  for (int gap = 0; gap < NUM_GAPS; ++gap) {

    // Assume the gap is 16
    // Technically it starts at arr[0], but we assume the first 'gap' is
    // already sorted, so we start at arr[16]
    for (int iter = gap; iter < n; ++iter) {
      int t = arr[iter];

      int inner = iter;

      for (inner = iter; inner >= gaps[gap] && arr[inner - gap] > t; inner -= iter) {
        arr[inner] = arr[inner - gaps[gap]];
      }
      arr[inner] = t;
    }
  }
}
