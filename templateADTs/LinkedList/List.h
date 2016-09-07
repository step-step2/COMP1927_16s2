#include <stdlib.h>
#include <stdio.h>

typedef struct list* List;
typedef struct node* Node;

List createList();
Node createNode(int v);

void append(List l, int v);
