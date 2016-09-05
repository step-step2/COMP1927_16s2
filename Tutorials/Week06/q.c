#include <stdio.h>
#include <stdlib.h>

typedef struct node* Node;
typedef struct list* List;

typedef struct node {
  Node next;
  int v;
} node;

typedef struct list {
  Node head;
} list;

void dropHelper(Node n) {
  if (n == NULL) {
    return;
  }
  dropHelper(n->next);
  free(n);
}

void drop(List l) {
  dropHelper(l->head);
  l->head = NULL;
}


int main() {
  int q = ~6;
  int r = 14 ^ 5;
  int w = 14 & 5;
  int e = 14 | 5;

  if (0 || 0) {
    printf("printy\n");
  }

  printf("%d\n", q);

  return 0;
}

