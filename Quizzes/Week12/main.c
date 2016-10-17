#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "BST.h"

void test1();
void test2();
void test3();

int main() {
  test1();
  test2();
  test3();
  return 0;
}

void test1() {
  Tree t = createTree();
  t = insert(t, 1);
  t = insert(t, 2);
  t = insert(t, 3);
  t = insert(t, 4);
  t = insert(t, 5);

  int count = 0;
  int* v = NULL;
  getKthSmallest(t, &count, v);
  assert(v != NULL && *v == 1);

  count = 1;
  v = NULL;
  getKthSmallest(t, &count, v);
  assert(v != NULL && *v == 2);

  count = 10;
  v = NULL;
  getKthSmallest(t, &count, v);
  assert(v == NULL);
  destroyTree(t);
}

void test2() {
  Tree t = createTree();
  t = insert(t, 4);
  t = insert(t, 2);
  t = insert(t, 1);
  t = insert(t, 3);

  t = insert(t, 6);
  t = insert(t, 5);
  t = insert(t, 7);

  int count = 0;
  int* v = NULL;

  int i;
  for (i = 0; i < 7; ++i) {
    count = i;
    v = NULL;
    getKthSmallest(t, &count, v);
    assert(v != NULL && *v == i + 1);
  }
  count = i;
  v = NULL;
  getKthSmallest(t, &count, v);
  assert(v == NULL);
}
