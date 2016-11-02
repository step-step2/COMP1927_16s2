#include "Tests.h"
#include "BST.h"
#include "util.h"

#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <assert.h>

// Test Methods
void test1();
void test2();
void test3();
void test4();

// Helper
void testTree(Tree t, int* vals, int n);

// test method
void kthSmallestTests() {
  void (*tests[])(void) = {
    test1,
    test2,
    test3,
    test4
  };

  unsigned long i = 0;
  for (i = 0; i < sizeof(tests)/sizeof(void*); ++i) {
    printf("Starting test %lu\n", i);
    tests[i]();
    printf("Congrats! Passed test %lu\n\n", i);
  }
}

/* Test Methods */
void test1() {
  Tree t = createTree();
  int vals[] = { 1, 2, 3, 4, 5 };

  t = buildTree(t, vals, sizeof(vals) / sizeof(int));

  testTree(t, vals, sizeof(vals) / sizeof(int));
}

void test2() {
  printf("Starting test2\n");
  Tree t = createTree();
  int vals[] = { 4, 2, 1, 3, 6, 5, 7 };

  t = buildTree(t, vals, sizeof(vals) / sizeof(int));

  qsort(vals, sizeof(vals) / sizeof(int), sizeof(int), fun_sort);
  
  testTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Congrats! Passed test2!\n\n");
}

void test3() {
  printf("Starting test3\n");
  Tree t = createTree();
  int vals[] = { 10, 5, 4, 3, 15, 13, 16, 17 };
  
  t = buildTree(t, vals, sizeof(vals) / sizeof(int));

  qsort(vals, sizeof(vals) / sizeof(int), sizeof(int), fun_sort);
  
  testTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Congrats! Passed test3!\n\n");
}

void test4() {
  printf("Starting test4\n");
  Tree t = createTree();
  int vals[100] = { 0 };

  srand(time(NULL));
  int i = 0;
  for (i = 0; i < 100; ++i) {
    vals[i] = rand() - (RAND_MAX / 2);
  }

  t = buildTree(t, vals, sizeof(vals) / sizeof(int));

  qsort(vals, sizeof(vals) / sizeof(int), sizeof(int), fun_sort);
  
  testTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Congrats! Passed test4!\n\n");
}


/* Helper Methods */
void testTree(Tree t, int* vals, int n) {
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
