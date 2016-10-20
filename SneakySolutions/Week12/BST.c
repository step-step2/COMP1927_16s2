#include <stdlib.h>
#include <stdio.h>
#include "BST.h"

struct tree {
  Tree right, left;
  int val;
};

Tree createTree() {
  return NULL;
}

void destroyTree(Tree t) {
  if (t == NULL) return;
  destroyTree(t->right);
  destroyTree(t->left);
  free(t);
}

Tree insert(Tree t, int v) {
  if (t == NULL) {
    t = malloc(sizeof(struct tree));
    t->val = v;
    t->right = NULL;
    t->left = NULL;
  } else {
    if (t->val < v) {
      t->right = insert(t->right, v);
    } else if (t->val > v) {
      t->left = insert(t->left, v);
    }
  }
  return t;
}

//
//     4
//   2   6
// 1  3 5  7

// Write this function. You are given a Tree (t), and two pointers.
// k is a pointer to the 'kth' smallest value you should go to
//  E.g. for *k == 0, it should be the smallest
// v is a pointer to an int pointer, which should finish by pointing to the value
//  E.g. You found the value, *v = &(t->val)
//  Initially, v is set to point to NULL
void getKthSmallest(Tree t, int* k, int** v) {
  if (t == NULL || *v != NULL) {
    return;
  }
  getKthSmallest(t->left, k, v);
  if (*k <= 0 && *v == NULL) {
    *v = &(t->val);
  }
  *k = *k - 1;
  getKthSmallest(t->right, k, v);
}
