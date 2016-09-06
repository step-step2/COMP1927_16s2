#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Queue.h"

struct queue {
  Node front, back;
  int size;
};

struct node {
  int v;
  Node next;
};

Queue createQueue() {
  Queue newQ = malloc(sizeof(struct queue));
  newQ->front = NULL;
  newQ->back = NULL;
  newQ->size = 0;

  return newQ;
}

Node createNode(int v) {
  Node newN = malloc(sizeof(struct node));
  newN->v = v;
  newN->next = NULL;

  return newN;
}

void push(Queue q, int v) {
  if (q->front == NULL) {
    q->front = q->back = createNode(v);
  } else {
    Node newN = createNode(v);
    q->back->next = newN;
    q->back = newN;
  }
  q->size++;
}

int pop(Queue q) {
  assert(q->size > 0);

  Node front = q->front;
  int v = front->v;
  q->front = q->front->next;
  free(front);

  q->size--;

  return v;
}

int getSize(Queue q) {
  return q->size;
}
