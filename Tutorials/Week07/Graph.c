#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

Graph createGraph(int numV) {
  Graph g = malloc(sizeof(struct GraphRep));
  g->nV = numV;

  for (int i = 0; i < numV; ++i) {
    g->connections[i] = NULL;
  }

  g->edges = malloc(numV * sizeof(int*));
  for (int i = 0; i < numV; ++i) {
    g->edges[i] = malloc(sizeof(int) * numV);
    g->edges[i] = calloc(numV, sizeof(int));
    for (int j = 0; j < numV; ++j) {
      g->edges[i][j] = 0;
    }
  }
}

Edge createEdge(int v);

void createConn(Graph g, int from, int to) {
  Node curr = g->connections[from];
}

int nEdges(Graph g) {
  int* curr = g->edges[2];

  for (int i = 0; i < g->nV; ++i) {
    if (curr[i] == 1) {
      printf("2 is connected to %d\n", i);
      for (int j = 0; j < g->nV; ++j) {
        if (g->edges[i][j] == 1) {
          printf("There is a path from 0 to %d\n", j);
        }
      }
    }
  }
}

Edge* edges(Graph g, int* nE) {
  (void)g;
  (void)nE;
  return NULL;
}
