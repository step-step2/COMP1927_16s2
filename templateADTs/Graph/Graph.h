typedef struct Edge* Edge;
typedef struct Graph *Graph;

Graph createGraph(int numV);
Edge createEdge(int v);

void createConnection(Graph g, int from, int to);
