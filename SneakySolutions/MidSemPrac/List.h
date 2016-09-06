#include <stdlib.h>
#include <stdio.h>

typedef struct list* List;
typedef struct node* Node;

List createList();
Node createNode(int v);

void append(List l, int v);
void printList(List l);

int nodeFromEnd(List l, int p);
List slice(List l, int lo, int hi);
void zip(List l1, List l2, int n);
List merge(List l1, List l2);
