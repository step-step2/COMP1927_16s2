#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Graph.h"
#include "Queue.h"

/* You do this bit! */
// You are given the graph, your starting node (start) and the finishing node (end)
// You need to find how long the shortest route from start, to the end node
// Remember, you need these things:
// 1. A way to remember what to explore next
// 2. A way to check if you've been to a Node before (to avoid exploring it again)
// We are not concerned right now about then remembering the shortest route,
// only how long it will take us to get to our goal
int BFS(Graph g, int start, int end) {
  (void)g;
  (void)start;
  (void)end;
  return 0;
}

Graph createGraph(int numV) {
  Graph nGraph = malloc(sizeof(struct GraphRep));
  nGraph->nV = numV;
  nGraph->edges = malloc(sizeof(Edge*) * numV);

  int i, j;
  for (i = 0; i < numV; ++i) {
    nGraph->edges[i] = malloc(sizeof(Edge) * numV);
    for (j = 0; j < numV; ++j) {
      nGraph->edges[i][j] = 0;
    }
  }

  return nGraph;
}

void createEdge(Graph g, int from, int to) {
  assert(from < g->nV);
  assert(to < g->nV);

  g->edges[from][to] = 1;
  g->edges[to][from] = 1;
}
