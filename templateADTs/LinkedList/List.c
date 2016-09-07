#include <stdio.h>
#include <stdlib.h>
#include "List.h"

typedef struct list {
  Node head, tail;
} list;

typedef struct node {
  int v;
  Node next, prev;
} node;

List createList() {
  List l = malloc(sizeof(list));
  l->head = NULL;
  l->tail = NULL;

  return l;
}

Node createNode(int v) {
  Node n = malloc(sizeof(node));
  n->next = NULL;
  n->prev = NULL;
  n->v = v;

  return n;
}

void append(List l, int v) {
  Node n = createNode(v);

  if (l->head == NULL) {
    l->head = l->tail = n;
  } else {
    l->tail->next = n;
    n->prev = l->tail;
  }
  l->tail = n;
}
