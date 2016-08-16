#include <stdlib.h>
#include "Quack.h"
#include "Stack.h"

// Implement the below!
typedef struct quack {
  int size;
} quack;

Quack createQuack() {
  Quack newQ = malloc(sizeof(quack));
  newQ->size = 0;
  return newQ;
}

int sizeQ(Quack q) {
  return q->size;
}

void pushQ(Quack q, int v) {
  (void)q;
  (void)v;
}

int popQ(Quack q) {
  (void)q;
  return 0;
}
