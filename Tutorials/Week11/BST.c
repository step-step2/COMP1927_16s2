#include "BST.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct BSTNode* BSTree;

struct BSTNode {
  int val;
  BSTree left, right;
};

int BSTreeMaxBranchLen(BSTree t) {
  (void)t;
  return 0;
}

int BSTWidth(BSTree t) {
  (void)t;
  return 0;
}

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

// Print the Tree Infix
void showBSTreeInfix(BSTree t) {
  (void)t;
}
// Print the Tree Postfix
void showBSTreePostfix(BSTree t) {
  (void)t;
}
// Print the Tree Inorder
void showBSTreeInorder(BSTree t) {
  (void)t;
}

BSTree BSTreeInsert(BSTree t, int v) {
  (void)t;
  (void)v;
  return NULL;
}
