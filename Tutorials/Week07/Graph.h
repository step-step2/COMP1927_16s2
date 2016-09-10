typedef struct EdgeRep* Edge;
typedef struct GraphRep *Graph;

typedef struct EdgeRep {
  int v;
  // int** edges[NUM_V][NUM_V];
  Edge next;
};

typedef struct GraphRep {
    int   nV;    // #vertices
    int **edges; // matrix of 0/1 values
    Edge connections[];
};

// Count the number of unique edges
int nEdges(Graph g);

// Return an array of edges, storing the number in nE
Edge* edges(Graph g, Edge* nE);











/* Other random things we will not implement */
Set newSet(int nElems);         // creates a new empty set to hold values 0..nElems-1
void dropSet(Set);              // free up memory used by a set
void SetInclude(Set s, int n);  // includes n in Set s; no effect if already there
void SetExclude(Set s, int n);  // removes n from Set s; no effect if not an element
int SetCardinality(Set s);      // returns count of elements in Set
int SetHasElem(Set s, int n);   // is n a member of Set s?
 
BitS newBitS(int nBits);        // creates a bit-string for values 0..nBits-1
void dropBitS(BitS b);          // free up memory used by bit-string
void setBit(BitS b, int n);     // set bit n to 1
void unsetBit(BitS b, int n);   // set bit n to 0
void bitIsSet(BitS b, int n);   // if bit n is set, return 1, else return 0
 
List newList();                 // creates a new empty List
void dropList(List L);          // free up memory used by List
void ListAppend(List L, int n); // add n at end of list
void ListMember(List L, int n); // returns 1 if n is in list, 0 otherwise
void ListDelete(List L, int n); // remove all occurences on n from list
int  ListLength(List L);        // returns count of elements in List
 
Queue newQueue();               // creates a new empty Queue
void dropQueue(Queue);          // free up memory used by Queue
void QueueJoin(Queue q, int n); // adds n to tail of Queue q
int QueueLeave(Queue q);        // removes and returns head of Queue
int QueueLength(Queue q);       // returns count of elements in Queue
 
Stack newStack();               // creates a new empty Stack
void dropStack(Stack);          // free up memory used by Stack
void StackPush(Stack s, int n); // adds n to top of Stack s
int StackPop(Stack s);          // removes and returns top of Stack
int StackIsEmpty(Stack s);      // indicates whether zero items in Stack
