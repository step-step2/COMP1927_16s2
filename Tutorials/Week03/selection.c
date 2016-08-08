#include "Sorts.h"
#include <stdlib.h>

void selection(int* arr, int n) {
  // Go over each element, have a sorted list at the beginning of the list
  // Find the min, and swap with the last element in our sorted list
  for (int i = 0; i < n; ++i) {
    int min = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[min] < arr[j]) min = j;
    }
    swap(arr + min, arr + i);
  }
}
