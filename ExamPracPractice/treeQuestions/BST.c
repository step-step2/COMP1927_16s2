#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "BST.h"


/* --------------- README --------------
 * A quick note before you begin these questions,
 * it's very strongly recommended that you work these out on pen and paper
 * before actually coding, figure out what edge cases there are, and just
 * work through some of those logically on paper.
 * These questions (tree questions) in particular are typical interview questions.
 * If you're into role playing (or not), try and practice speaking out your thoughts
 * the whole time as you're doing these questions on paper/coding. This is what
 * the interviewer wants to see, your thinking process. It'll also help you maintain
 * focus and pick up errors which you would otherwise miss.
 *
 * https://en.wikipedia.org/wiki/Rubber_duck_debugging is pretty legit
 *
 * glhf
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
  (void)t;
  (void)v;
  return 0;
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
*/
void getKthSmallest(Tree t, int* k, int** v) {
  (void)t;
  (void)k;
  (void)v;
}

/* Find the lowest common ancestor between the noes with values v1 and v2.
   You are guaranteed that both these values exist in your BST and they are
   different
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

Tree createNode(int v) {
  Tree t = malloc(sizeof(struct tree));
  t->val = v;
  t->right = NULL;
  t->left = NULL;

  return t;
}

void destroyTree(Tree t) {
  if (t == NULL) return;
  destroyTree(t->right);
  destroyTree(t->left);
  free(t);
}

Tree insert(Tree t, int v) {
  if (t == NULL) {
    t = createNode(v);
  } else {
    if (t->val < v) {
      t->right = insert(t->right, v);
    } else if (t->val > v) {
      t->left = insert(t->left, v);
    }
  }
  return t;
}

Tree randInsert(Tree t, int v) {
  if (t == NULL) {
    t = createNode(v);
  } else {
    if (rand() % 2) {
      t->right = randInsert(t->right, v);
    } else {
      t->left = randInsert(t->left, v);
    }
  }
  return t;
}

// Insert in shorted path possible place
Tree inOrderInsert(Tree t, int v) {

  // Base cases
  if (t == NULL) {
    return createNode(v);
  }

  // Max possible height we'll deal with is 6
  Tree Q[64] = {};
  Tree temp[64] = {};

  // Current depth in Q
  int p = 0;
  int walk = 0;


  Q[0] = t;

  // For each level
  for (p = 0; p < 6; ++p) {

    // Walk over each node in the current level
    for (walk = 0; walk < (1 << p); ++walk) {

      // Using goto's, #reckless, but legit this is an appropriate use of them
      // A clean way to bounce out of a nested for loop
      if (Q[walk]->left == NULL) goto found;
      if (Q[walk]->right == NULL) goto found;

      temp[walk * 2] = Q[walk]->left;
      temp[walk * 2 + 1] = Q[walk]->right;
    }
    memcpy(Q, temp, sizeof(Tree) * 64);
  }

  // We never found an empty position
  return t;

found:
  // At this point we know walk points to a parent node with either left or right
  // being NULL, check which one then points out
  if (Q[walk]->left == NULL) {
    Q[walk]->left = createNode(v);
  } else {
    Q[walk]->right = createNode(v);
  }

  return t;
}

int getRootVal(Tree t) {
  assert(t != NULL);
  return t->val;
}

Tree buildTree(Tree t, int* vals, int n, Tree (*insertF)(Tree, int)) {
  int i = 0;
  for (i = 0; i < n; ++i) {
    t = insertF(t, vals[i]);
  }
  return t;
}

