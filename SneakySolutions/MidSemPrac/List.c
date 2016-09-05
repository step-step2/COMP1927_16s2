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
    l->head = n;
  } else {
    l->tail->next = n;
  }
  l->tail = n;
}

int KthLast(List l, int p) {

  int kthLastP = 0;
  int i = 0;
  Node curr = l->head;

  for (; curr != NULL; curr = curr->next) kthLastP++;

  kthLastP -= p;
  for (curr = l->head; i != kthLastP; ++i, curr = curr->next);

  if (curr != NULL) {
    return curr->v;
  } else {
    fprintf(stderr, "That should not have happened...\n");
  }

  return 0;
}

List slice(List l, int lo, int hi) {
  List newList = createList();

  int i = 0;
  Node curr;

  if (lo < 0) lo = 0;

  for (i = 0, curr = l->head; i < lo && curr != NULL; ++i, curr = curr->next);

  for (; curr != NULL && i < hi; ++i, curr = curr->next) {
    append(newList, curr->v);
  }

  return newList;
}

void zip(List l1, List l2, int n) {

  Node curr1 = l1->head;
  Node curr2 = l2->head;

  Node temp1, temp2;

  if (curr1 == NULL) {
    l1->head = l2->head;
  } else if (curr2 == NULL) {
    l2->head = l1->head;
  }

  int p = 0;
  while (curr1->next != NULL && curr2->next != NULL) {
    p = 0;
    while (p < n - 1 && curr1->next != NULL) curr1 = curr1->next;
    temp1 = curr1->next;
    curr1->next = curr2;

    p = 0;
    while (p < n - 1 && curr2->next != NULL) curr2 = curr2->next;
    temp2 = curr2->next;
    curr2->next = temp1;

    curr1 = temp1;
    curr2 = temp2;
  }
}

List merge(List l1, List l2) {
  List newList = createList();
  Node curr1 = l1->head;
  Node curr2 = l2->head;

  while (curr1 != NULL && curr2 != NULL) {
    if (curr1->v < curr2->v) {
      append(newList, curr1->v);
      curr1 = curr1->next;
    } else {
      append(newList, curr2->v);
      curr2 = curr2->next;
    }
  }

  for (; curr1 != NULL; curr1 = curr1->next) append(newList, curr1->v);
  for (; curr2 != NULL; curr2 = curr2->next) append(newList, curr2->v);

  return newList;
}

void printList(List l) {
  Node c = l->head;

  if (c == NULL) return;
  while (c != NULL) {
    printf("%d->", c->v);
    c = c->next;
  }
  printf("x\n");
}
