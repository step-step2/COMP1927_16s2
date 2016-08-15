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


/* 
 * Example walkthrough, with gaps { 32, 16, 8, 4, 2, 1 } on list
 * { 100, 99, 98, 97... }
 * Start comparing arr[32] == 68, and arr[0]
 * They are out of order, so shuffle them along, and we place 68 at arr[0]
 * { 68, 69, 70, ...}
 */

void shell(int* arr, int n) {
  int gaps[NUM_GAPS] = {8,7,6,5,4,3,2,1}

    // Assume we are at gap 16
    // Iterate over the gap values, so first go over 
    // arr[16], and arr[0],
    // arr[17], and arr[1]....
    // Once we get to arr[32], we do:
    // arr[32], arr[16], arr[0]
    // Making sure that each set is sorted
    for (int iter = gap; iter < n; ++iter) {
      int t = arr[iter];

      int inner = iter;

      // Go over our smaller subset
      for (inner = iter; inner >= gap && arr[inner - gap] > t; inner -= gap) {
        // Shuffle along while the latter gap (i.e. arr[16]) is smaller than the earlier one
        // (i.e. arr[0])
        arr[inner] = arr[inner - gap];
      }
      // Place the one we got initially at it's correct position
      arr[inner] = t;
    }
  }
}
