typedef int Edge;
typedef struct GraphRep *Graph;

typedef struct GraphRep {
    int   nV;    // #vertices
    Edge **edges; // matrix of 0/1 values
};

Graph createGraph(int numV);
void createEdge(Graph g, int from, int to);


int BFS(Graph g, int start, int end);
