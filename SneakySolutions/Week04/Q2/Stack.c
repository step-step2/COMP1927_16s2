#include <stdlib.h>
#include <assert.h>
#include "Stack.h"

// Implement the below!
typedef struct stack {
  Node top;
  int size;
} stack;

typedef struct node {
  int v;
  Node next;
} node;

Stack createStack() {
  Stack newStack = malloc(sizeof(stack));
  newStack->top = NULL;
  newStack->size = 0;
  return newStack;
}

Node createNode(int v) {
  Node newNode = malloc(sizeof(node));
  newNode->next = NULL;
  newNode->v = v;
  return newNode;
}

void pushS(Stack s, int v) {
  Node new = createNode(v);
  new->next = s->top;
  s->top = new;
  s->size++;
}

int popS(Stack s) {
  assert(s->size != 0);

  Node t = s->top;
  int v = t->v;
  s->top = s->top->next;

  free(t);
  s->size--;
  return v;
}

int sizeS(Stack s) {
  return s->size;
}
