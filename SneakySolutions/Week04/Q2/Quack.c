#include <stdlib.h>
#include "Quack.h"
#include "Stack.h"

// Implement the below!
typedef struct quack {
  int size;
  Stack s1, s2;
} quack;

Quack createQuack() {
  Quack newQ = malloc(sizeof(quack));
  newQ->size = 0;
  newQ->s1 = createStack();
  newQ->s2 = createStack();
  return newQ;
}

int sizeQ(Quack q) {
  return q->size;
}

void pushQ(Quack q, int v) {
  q->size++;
  if (sizeS(q->s1) == 0) {
    pushS(q->s2, v);
    return;
  }

  while (sizeS(q->s1)) {
    int t = popS(q->s1);
    pushS(q->s2, t);
  }
  pushS(q->s2, v);
}

int popQ(Quack q) {
  q->size--;
  if (sizeS(q->s2) == 0) {
    return popS(q->s1);
  }

  while (sizeS(q->s2)) {
    int t = popS(q->s2);
    pushS(q->s1, t);
  }
  return popS(q->s1);
}
