#define MAX_WEIGHT 99  // works for the example graph
#define NUM_VERTEX 10  // works for the example graph

typedef struct graph* Graph;

struct graph {
  int nV;
  int** adj;
};

static int fr[NUM_VERTEX];
void GRAPHmspanningTree(Graph G, int spanningTree[], int weight[])
{
   int vertex, w, min; 
   for (vertex = 0; vertex < G->nV; vertex++) { 
        spanningTree[vertex] = -1; 
        fr[vertex] = vertex; 
        weight[vertex] = MAX_WEIGHT;
   }
   spanningTree[0] = 0;
   weight[G->nV] = MAX_WEIGHT;

   for (min = 0; min != G->nV; ) {
      vertex = min; 
      spanningTree[min] = fr[min];
      for (w = 0, min = G->nV; w < G->nV; w++) {
         if (spanningTree[w] == -1) { 
            if (G->adj[vertex][w] < weight[w]) { 
              weight[w] = G->adj[vertex][w];
              fr[w] = vertex; 
            }
            if (weight[w] < weight[min]) min = w; 
         }
      }
   }
}

typedef int Vertex;

void shortestPath(Graph g, Vertex start, Vertex pred[], int dist[]) {
   PQueue pq = newPQ(dist,nV(g));
   for (Vertex v = 0; v < g->nV; v++) {
     pred[v] = -1;
     dist[v] = MAX_WT;
     join(pq,v);
   }
   dist[start] = 0.0;  reorder(pq,start);
   while (!empty(pq)) {
      Vertex s = leave(pq);
      for (Vertex t = 0; t < nV(g); t++) {
         int len = g->adj[s][t];
         if (len == NO_EDGE) continue;
         if (dist[s] + len < dist[t]) {
            pred[t] = s;
            dist[t] = dist[s]+len;
            reorder(pq,t);
         }
      }
   }
   disposePQ(pq);
}
