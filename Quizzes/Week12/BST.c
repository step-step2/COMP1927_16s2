#include <stdlib.h>
#include <stdio.h>
#include "BST.h"

struct tree {
  Tree right, left;
  int val;
};

// Write this function. You are given a Tree (t), and two pointers.
// k is a pointer to the 'kth' smallest value you should go to
//  E.g. for *k == 0, it should return the smallest value
// v is a pointer to an int pointer, the function should finish by pointing to the value
//  E.g. You found the value, *v = &(t->val)
//  Initially, v is set to point to NULL
//
//  You can assume the tree is a BST with at least one element and no duplicates 
//  and that 0 <= k < n where n is the number of nodes in the tree
//
//  To test your solution, compile with `make clean && make`, then ./solution
//  All the tests are in main.c
void getKthSmallest(Tree t, int* k, int** v) {
  (void)t;
  (void)k;
  (void)v;
}


/*

   You can ignore these methods below, unless you want examples of using the tree

*/
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
