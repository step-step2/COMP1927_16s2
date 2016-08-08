#include "Sorts.h"
#include <stdlib.h>

void insertion(int* arr, int n) {
  // Go over each element, starting from arr[1]
  // arr[0] up to arr[i] is all sorted, so it's like we assume initially
  // that just a[0] is sorted (the only element in the sorted part of our
  // array)
  for (int i = 1; i < n; ++i) {
    int curr = arr[i];
    int j;
    // For each element in our unsorted section, keep on shifting values
    // to the right, until we find the correct position
    // i.e. 1 3 4 2, and we want to find 2, where i is 3, our loop will:
    // 1 3 2 4
    // 1 2 2 4
    for (j = i - 1; j >= 0 && arr[j] > curr; --j) arr[j+1] = arr[j];
    arr[j + 1] = curr;
  }
}
