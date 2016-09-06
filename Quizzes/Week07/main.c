#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

int main() {
  int numV;
  Graph g;

  printf("Please enter the number of vertices: ");
  scanf("%d", &numV);

  g = createGraph(numV);

  int e1, e2;
  printf("Please enter the edges (this graph is non-directed btw):\n");
  while (scanf("%d %d", &e1, &e2) == 2) {
    createEdge(g, e1, e2);
  }

  printf("How many steps to get from: (in the form '%%d %%d'):\n");
  while (scanf("%d %d", &e1, &e2) == 2) {
    printf("The shortest route for %d->%d = %d\n", e1, e2, BFS(g, e1, e2));
  }

  return 0;
}
