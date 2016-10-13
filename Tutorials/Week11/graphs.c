#include <stdio.h>
#include <stdlib.h>

typedef struct GraphRep {
   int nV; // vertex count
   int nE; // edge count
   unsigned char **edges; // adjacency matrix
} *Graph;

Graph newGraph(int nV) {
  Graph nG = malloc(sizeof(struct GraphRep));
  nG->nV = nV;
  nG->nE = 0;

  nG->edges = malloc(sizeof(char*) * nV);
  int i;
  for (i = 0; i < nV; ++i) {
    nG->edges[i] = calloc(nV, sizeof(char));
  }

  return nG;
}

int main() {
  Graph g = newGraph(10);
  printf("Sizes:\n");
  printf("g->nV: %lu\n", sizeof(g->nV));
  printf("g->nE: %lu\n", sizeof(g->nE));
  printf("g->edges: %lu\n", sizeof(g->edges));
  printf("g->edges[x]: %lu\n", sizeof(g->edges[0]) * 10);
  printf("g->edges[x][y]: %lu\n", sizeof(g->edges[0][0]) * 10*10);
  return 0;
}
