typedef struct GraphRep *Graph;
typedef struct EdgeRep *Edge;

Graph createGraph(int numV);
Edge createEdge(int v);
void addEdge(Graph g, int from, int to);


int BFS(Graph g, int start, int end);
