#include <stdlib.h>
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
    return calloc(1, sizeof(struct tree));
  } else {
    if (t->val < v) {
      t->right = insert(t->right, v);
    } else if (t->val > v) {
      t->left = insert(t->left, v);
    }
    return t;
  }
}

void getKthSmallest(Tree t, int* n, int* v) {
/* Your code goes here */
  (void)t;
  (void)n;
  (void)v;
}
