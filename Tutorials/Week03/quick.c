#include "Sorts.h"
#include <stdlib.h>

// Partition will split the list into two sublists,
// with the 'mid' being some position where all values
// to the left are smaller, and the right bigger
// The two sublists are not necessarily of equal length
// Although, ideally they are
int partition(int* arr, int lo, int hi) {

  // Choosing 0 as the pivot, what is the worst case then? What is worst case?
  // In other words, when will the loop below do nothing?
  int pivot = arr[hi];

  // This will end up being the 'middle' value we return
  int i = lo;

  // Loop over our array, incrementing i every time we swap 
  // (move a smaller value to the left of i)
  // We stop when we reach the last value
  for (int j = lo; j < hi; ++j) {
    if (arr[j] <= pivot) {
      swap(arr + i, arr + j);
      ++i;
    }
  }
  swap(arr + i, arr + hi);

  return i;
}

void quickSort(int* arr, int lo, int hi)  {
  if (lo < hi) {
    // Split our array
    int mid = partition(arr, lo, hi);

    // Quicksort our sub arrays
    quickSort(arr, lo, mid - 1);
    quickSort(arr, mid + 1, hi);
  }
}

void quick(int* arr, int n) {
  quickSort(arr, 0, n - 1);
}
