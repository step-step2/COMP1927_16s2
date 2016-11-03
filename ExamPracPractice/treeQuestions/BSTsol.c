#include <stdlib.h>
#include <stdio.h>
#include "BST.h"


/* --------------- README --------------
 * These are the BST solutions!
 * Only look here once you've given up on the question.
 * That's the point where you're convinced that your fists or
 * face would probably write better code than your hands, no sooner
 */


// Tree struct you have to play with
struct tree {
  Tree right, left;
  int val;
};

/* 
 * Easy Questions 
 */
// Check if a value is in the tree
// Should return 1 if it finds it, otherwise 0
int findValue(Tree t, int v) {
  // Our base case, where t our tree is empty (NULL)
  if (t == NULL) return 0;

  // If we have our value in the current root we're looking at,
  // return 1
  if (t->val == v) {
    return 1;
  }

  // Otherwise, continue to look down the left and right children
  // Remember that an || in this case will yield 1 if either value
  // is 1, so if the left tree found the value, then we'd get:
  // (1 || 0) == 1
  return findValue(t->left, v) || findValue(t->right, v);
}

// Check to see if the given tree is actually a BST
// The rule is that from some arbitrary root, the left child's value must be
// smaller than the root, and the right child bigger
// return 0 if it isn't a BST, 1 if it is
int isBST(Tree t) {
  (void)t;
  return 0;
}


/*
 * Medium Questions
 */
/* 
   You are given a Tree (t), and two pointers.
   k is a pointer to the 'kth' smallest value you should go to
    E.g. for *k == 0, it should return the smallest value
         for *k == 4, it should return the 5th smallest value
   v is a pointer to an int pointer, the function should finish by pointing to the value
    E.g. You found the kth smallest value, there should be some code which says
         *v = &(t->val)
    Initially, v is set to point to NULL
  
    You can assume the tree is a BST with at least one element and no duplicates 
    and that 0 <= k < n where n is the number of nodes in the tree
  
    To test your solution, compile with `make clean && make`, then ./solution
  All the tests are in main.c
*/
void getKthSmallest(Tree t, int* k, int** v) {
  (void)t;
  (void)k;
  (void)v;
}

/* Find the lowest common ancestor between the noes with values v1 and v2.
   You are guaranteed that both these values exist in your BST
   The lowest common ancestor is defined as the first node which each of
   v1 and v2 share, as they go up the tree. I.e. the root of the whole tree is
   the highest common ancestor. For the following tree:
           
            4
          /   \
         2     7
        / \   /
       1   3 6
      /
     0 
   If v1 == 3, and v2 == 7, then their lowest common ancestor is 4
   If v1 == 3, and v2 == 0, then their lowest common ancestor is 2
*/
Tree lowestCommonAnc(Tree t, int v1, int v2) {
  (void)t;
  (void)v1;
  (void)v2;
  return NULL;
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

Tree buildTree(Tree t, int* vals, int n) {
  int i = 0;
  for (i = 0; i < n; ++i) {
    t = insert(t, vals[i]);
  }
  return t;
}

