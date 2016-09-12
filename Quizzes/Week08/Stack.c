#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Stack.h"

struct stack {
  Node front, back;
  int size;
};

struct node {
  int v;
  Node next;
};

Stack createStack() {
  Stack newS = malloc(sizeof(struct stack));
  newS->front = NULL;
  newS->back = NULL;
  newS->size = 0;

  return newS;
}

Node createNode(int v) {
  Node newN = malloc(sizeof(struct node));
  newN->v = v;
  newN->next = NULL;

  return newN;
}

void push(Stack s, int v) {
  if (s->front == NULL) {
    s->front = s->back = createNode(v);
  } else {
    Node newNode = createNode(v);
    newNode->next = s->front;
    s->front = newNode;
  }
  s->size++;
}

int pop(Stack s) {
  assert(s->size > 0);
  int v = s->front->v;
  Node n = s->front;
  s->front = s->front->next;
  free(n);
  return v;
}

int getSize(Stack s) {
  return s->size;
}
