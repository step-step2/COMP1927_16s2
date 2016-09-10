#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

int main() {
  int numV, numE;
  Graph g;

  // printf("Please enter the number of vertices: ");
  scanf("%d %d", &numV, &numE);

  g = createGraph(numV);

  int e1, e2, i = 0;
  // printf("Please enter the edges (this graph is non-directed btw):\n");
  while (i < numE && scanf("%d %d", &e1, &e2) == 2) {
    addEdge(g, e1, e2);
    ++i;
  }

  // printf("How many steps to get from: (in the form '%%d %%d'):\n");
  while (scanf("%d %d", &e1, &e2) == 2) {
    printf("%d->%d = %d\n", e1, e2, BFS(g, e1, e2));
  }

  return 0;
}
