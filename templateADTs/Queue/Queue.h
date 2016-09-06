typedef struct queue* Queue;
typedef struct node* Node;

Queue createQueue();
Node createNode(int v);

void push(Queue q, int v);
int pop(Queue q);
int getSize(Queue q);
