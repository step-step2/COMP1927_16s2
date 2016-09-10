#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Graph.h"
#include "Queue.h"

struct GraphRep {
    int   nV;    // #vertices
    Edge* edges; // matrix of 0/1 values
};

struct EdgeRep {
    int connection;
    Edge next;
};


/* You do this bit! */
// You are given the graph, your starting node (start) and the finishing node (end)
// You need to find how long the shortest route from start, to the end node
// Remember, you need these things:
// 1. A way to remember what to explore next
// 2. A way to check if you've been to a Node before (to avoid exploring it again)
// We are not concerned right now about then remembering the shortest route,
// only how long it will take us to get to our goal
// If you cannot get from start to end, return -1
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

  int i;
  for (i = 0; i < numV; ++i) {
    nGraph->edges[i] = NULL;
  }

  return nGraph;
}

Edge createEdge(int v) {
  Edge newEdge = malloc(sizeof(struct EdgeRep));
  newEdge->connection = v;
  newEdge->next = NULL;
  return newEdge;
}

void addEdge(Graph g, int from, int to) {
  assert(from < g->nV);
  assert(to < g->nV);

  Edge curr = g->edges[from];
  if (curr == NULL) {
    g->edges[from] = createEdge(to);
  } else {
    while (curr->next != NULL) {
      curr = curr->next;
    }
    curr->next = createEdge(to);
  }

  curr = g->edges[to];
  if (curr == NULL) {
    g->edges[to] = createEdge(from);
  } else {
    while (curr->next != NULL) {
      curr = curr->next;
    }
    curr->next = createEdge(from);
  }
}
