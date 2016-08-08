#include "Sorts.h"
#include <stdlib.h>

void mergeSort(int* arr, int lo, int hi)  {
  // Keep on splitting until we only have 0 or 1 elements
  // in our sub array
  if (lo >= hi) return;

  // Split array into 2 sub arrays
  int mid = ((lo + hi + 1) / 2);
  mergeSort(arr, lo, mid - 1);
  mergeSort(arr, mid, hi);

  // merged will be the result of sorting our two sublists
  int merged[hi - lo + 1];
  int p = 0;

  // i and j keep the position in our sublists
  int i, j;

  // 'Sorting' our two sublists by putting the elements in
  // sorted order in merged. You can assume the sub lists are sorted
  // Pretend our arr is:
  // [2, 3, 6, 10, 5, 8, 9, 9 ]
  // So our sublists are:
  // [2, 3, 6, 10] we'll call this subset A
  // [5, 8, 9, 9 ] we'll call this subset B
  // With p = 0, i = 0, j = 4
  for (i = lo, j = mid; i < mid && j < hi; ++p) {
    // Subset A has the smaller value
    // Put it into merged, and increment our pos
    if (arr[i] < arr[j]) {
      merged[p] = arr[i];
      ++i;

    // Subset B has the smaller value
    // Put it into merged, and increment our pos
    } else {
      merged[p] = arr[j];
      ++j;
    }
  }
  // At this point, we have depleted subset A or B

  // Go over the remaining list, append it to merged
  // One of these loops will just be skipped
  for (;i < mid; ++p, ++i) merged[p] = arr[i];
  for (;j < hi; ++p, ++j) merged[p] = arr[j];

  // Put the sorted result back into our array
  for (i = lo, p = 0; p < hi - lo + 1; ++i, ++p) arr[i] = merged[p];
}

void merge(int* arr, int n) {
  mergeSort(arr, 0, n - 1);
}
