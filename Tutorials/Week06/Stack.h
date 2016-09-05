#include <stdlib.h>

typedef struct _stack* Stack;
typedef struct _node* Node;

typedef struct _node {
  int v;
  Node next;
} node;

typedef struct _stack {
  int size;
  Node head;
} stack;

Stack newStack();

void push(Stack s, int i);
int pop(Stack s);
