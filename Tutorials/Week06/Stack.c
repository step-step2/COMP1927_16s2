#include "Stack.h"

typedef struct _node {
  int v;
  Node next;
} node;

typedef struct _stack {
  int size;
  Node head;
} stack;


Node createNode(int v) { (void)v; return NULL;};

Stack newStack() {
  Stack newStack = malloc(sizeof(stack));
  newStack->size = 0;
  newStack->head = NULL;

  return newStack;
}

void push(Stack s, int i) {
  Node newNode = createNode(i);
  if (newNode == NULL || s == NULL) {
    fprintf(stderr, "You broke things\n");
    exit(1);
  }

  newNode->next = s->head;
  s->head = newNode;
  s->size++;
}


int pop(Stack s) {

  if (s == NULL || s->head == NULL) {
    fprintf(stderr, "You broke things\n");
    exit(1);
  }

  Node delNode = s->head;
  s->head = s->head->next;

  int temp = delNode->v;

  free(delNode);
  s->size--;

  return temp;
}












