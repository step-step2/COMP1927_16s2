#include "BST.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct BSTNode* BSTree;

struct BSTNode {
  int val;
  BSTree left, right;
};

int BSTreeMaxBranchLen(BSTree t) {
  if (t == NULL || (t->right == NULL && t->left == NULL)) {
    return 0;
  } else {
    return maxBranchLen(t) - 1;
  }
}

int maxBranchLen(BSTree t) {
  if (t == NULL) {
    return 0;
  } else {
    return 1 + max(BSTreeMaxBranchLen(t->left), BSTreeMaxBranchLen(t->right));
  }
}

int maxLen(BSTree t) {
}

BSTree insert(BSTree t, int v) {
}

int BSTWidth(BSTree t) {
  if (t == NULL) {
    return 0;
  } else if (t->left == NULL && t->right == NULL){
    return 3;
  } else {
    return BSTWidth(t->right) + BSTWidth(t->left) + 3;
  }
}

// Modified
int BSTreeFind(BSTree t, int v)
{
  if (t == NULL)
  return 0;
  else if (v < t->value)
  return BSTreeFind(t->left, v);
  else if (v > t->value)
  return BSTreeFind(t->right, v);
  else // (v == t->value)
  return 1;
}

// count #nodes in BSTree
int BSTreeNumNodes(BSTree t)
{
   if (t == NULL)
      return 0;
   else
      return 1 + BSTreeNumNodes(t->left)
               + BSTreeNumNodes(t->right);
}

// Delete all instance of v in  the BSTree
BSTree BSTreeDelete(BSTree t, int v) {
  (void)t;
  (void)v;
  return NULL;
}

// Print the Tree Inorder
void showBSTreePrefix(BSTree t) {
  if (t == NULL) return;

  printf("%d ", t->val);
  showBSTreePrefix(t->left);
  showBSTreePrefix(t->right);
}
// Print the Tree Postfix
void showBSTreePostfix(BSTree t) {
  if (t == NULL) return;

  showBSTreePostfix(t->left);
  showBSTreePostfix(t->right);
  printf("%d ", t->val);
}
// Print the Tree Infix
void showBSTreeInfix(BSTree t) {
  if (t == NULL) return;

  showBSTreeInfix(t->left);
  printf("%d ", t->val);
  showBSTreeInfix(t->right);
}

BSTree BSTreeInsert(BSTree t, int v) {
  (void)t;
  (void)v;
  return NULL;
}
