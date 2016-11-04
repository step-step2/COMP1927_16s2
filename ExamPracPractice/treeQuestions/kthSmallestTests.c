#include "Tests.h"
#include "BST.h"
#include "util.h"

#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <assert.h>

// Test Methods
void kthSmallestTest1();
void kthSmallestTest2();
void kthSmallestTest3();
void kthSmallestTest4();

// Helper
void kthSmallestTestTree(Tree t, int* vals, int n);

// kthSmallestTest method
void kthSmallestTests() {
  void (*kthSmallestTests[])(void) = {
    kthSmallestTest1,
    kthSmallestTest2,
    kthSmallestTest3,
    kthSmallestTest4
  };

  printf("Running kthSmallestTests\n");
  unsigned long i = 0;
  for (i = 0; i < sizeof(kthSmallestTests)/sizeof(void*); ++i) {
    printf("Starting kthSmallestTest %lu\n", i);
    kthSmallestTests[i]();
    printf("Congrats! Passed kthSmallestTest %lu\n\n", i);
  }
  printf("Passed kthSmallestTests!\n");
}

/* Test Methods */
void kthSmallestTest1() {
  Tree t = createTree();
  int vals[] = { 1, 2, 3, 4, 5 };

  t = buildTree(t, vals, sizeof(vals) / sizeof(int));

  kthSmallestTestTree(t, vals, sizeof(vals) / sizeof(int));
}

void kthSmallestTest2() {
  printf("Starting kthSmallestTest2\n");
  Tree t = createTree();
  int vals[] = { 4, 2, 1, 3, 6, 5, 7 };

  t = buildTree(t, vals, sizeof(vals) / sizeof(int));

  qsort(vals, sizeof(vals) / sizeof(int), sizeof(int), fun_sort);
  
  kthSmallestTestTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Congrats! Passed kthSmallestTest2!\n\n");
}

void kthSmallestTest3() {
  printf("Starting kthSmallestTest3\n");
  Tree t = createTree();
  int vals[] = { 10, 5, 4, 3, 15, 13, 16, 17 };
  
  t = buildTree(t, vals, sizeof(vals) / sizeof(int));

  qsort(vals, sizeof(vals) / sizeof(int), sizeof(int), fun_sort);
  
  kthSmallestTestTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Congrats! Passed kthSmallestTest3!\n\n");
}

void kthSmallestTest4() {
  printf("Starting kthSmallestTest4\n");
  Tree t = createTree();
  int vals[100] = { 0 };

  srand(time(NULL));
  int i = 0;
  for (i = 0; i < 100; ++i) {
    vals[i] = rand() - (RAND_MAX / 2);
  }

  t = buildTree(t, vals, sizeof(vals) / sizeof(int));

  qsort(vals, sizeof(vals) / sizeof(int), sizeof(int), fun_sort);
  
  kthSmallestTestTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Congrats! Passed kthSmallestTest4!\n\n");
}


/* Helper Methods */
void kthSmallestTestTree(Tree t, int* vals, int n) {
  int i = 0;
  int k = 0;
  int* v = NULL;
  for (i = 0; i < n; ++i) {
    k = i;
    v = NULL;
    getKthSmallest(t, &k, &v);
    assert(v != NULL && *v == vals[i]);
  }
  destroyTree(t);
}
