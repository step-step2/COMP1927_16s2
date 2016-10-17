#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

#include "BST.h"

void test1();
void test2();
void test3();
void test4();

void testTree(Tree t, int* vals, int n);
Tree buildTree(Tree t, int* vals, int n);
int fun_sort(const void* a, const void* b);

int main() {
  test1();
  test2();
  test3();
  test4();
  printf("You passed all the tests. Good for you.\n");
  return 0;
}

/* Test Methods */
void test1() {
  printf("Starting test1\n");
  printf("Constructing Tree\n");
  Tree t = createTree();
  int vals[] = { 1, 2, 3, 4, 5 };

  buildTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Tree Constructed\n");
  testTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Congrats! Passed test1!\n\n");
}

void test2() {
  printf("Starting test2\n");
  printf("Constructing Tree\n");
  Tree t = createTree();
  int vals[] = { 4, 2, 1, 3, 6, 5, 7 };

  buildTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Tree Constructed\n");

  qsort(vals, sizeof(vals) / sizeof(int), sizeof(int), fun_sort);
  
  testTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Congrats! Passed test2!\n\n");
}

void test3() {
  printf("Starting test3\n");
  printf("Constructing Tree\n");
  Tree t = createTree();
  int vals[] = { 10, 5, 4, 3, 15, 13, 16, 17 };
  buildTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Tree Constructed\n");

  qsort(vals, sizeof(vals) / sizeof(int), sizeof(int), fun_sort);
  
  testTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Congrats! Passed test3!\n\n");
}

void test4() {
  printf("Starting test4\n");
  printf("Constructing Tree\n");
  Tree t = createTree();
  int vals[100] = { 0 };

  srand(time(NULL));
  int i = 0;
  for (i = 0; i < 100; ++i) {
    vals[i] = rand() - (RAND_MAX / 2);
  }

  buildTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Tree Constructed\n");

  qsort(vals, sizeof(vals) / sizeof(int), sizeof(int), fun_sort);
  
  testTree(t, vals, sizeof(vals) / sizeof(int));
  printf("Congrats! Passed test4!\n\n");
}


/* Helper Methods */
void testTree(Tree t, int* vals, int n) {
  int i = 0;
  int k = 0;
  int* v = NULL;
  printf("Starting test case\n");
  for (i = 0; i < n; ++i) {
    printf("Testing %dth smallest should return %d\n", i, vals[i]);
    k = i;
    v = NULL;
    getKthSmallest(t, &k, &v);
    assert(v != NULL && *v == vals[i]);
  }
  destroyTree(t);
}

Tree buildTree(Tree t, int* vals, int n) {
  int i = 0;
  for (i = 0; i < n; ++i) {
    t = insert(t, vals[i]);
  }
  return t;
}

int fun_sort(const void* a, const void* b) {
  return *(int*)a - *(int*)b;
}
