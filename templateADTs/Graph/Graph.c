#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

struct Edge {
  int v;
  Edge next;
};

struct Graph {
    int   nV;    // #vertices
    int **connections; // matrix of 0/1 values
    // Edge* connections; // Adjacency list
};


// Assuming we are using a matrix to represent a graph
// This is the memory-optimised version
Graph createGraph(int numV) {
  Graph g = malloc(sizeof(struct Graph));
  g->nV = numV;
  g->connections = malloc(sizeof(int*) * numV);

  int i = 0;
  for (; i < numV; ++i) {
    // Assuming the graph is non-directional, and A is connected to A
    // Consider a table; (0,0), (1,1) is all implicitly connected
    // We only consider half the graph
    g->connections[i] = calloc((numV - i - 1), sizeof(int));
  }

  return g;
}

// Method for Adjacency List
Edge createEdge(int v) {
  Edge newE = malloc(sizeof(struct Edge));
  newE->v = v;
  newE->next = NULL;
  return newE;
}

void createConnection(Graph g, int from, int to) {
  if (from == to) return;
  if (from < to) {
    int t = to;
    to = from;
    from = t;
  }

  // Since we assume that A is connected to A, that eliminates a column
  // int our matrix
  from -= 1;
  to -= 1;

  g->connections[from][to] = 1;
}
