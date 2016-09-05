#include <stdlib.h>
#include <stdio.h>

typedef struct list* List;
typedef struct node* Node;

List createList();
Node createNode(int v);

void append(List l, int v);
void printList(List l);

List slice(List l, int lo, int hi);
int KthLast(List l, int p);
void zip(List l1, List l2, int n);
List merge(List l1, List l2);
