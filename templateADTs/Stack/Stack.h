typedef struct stack* Stack;
typedef struct node* Node;

Stack createStack();
Node createNode(int v);

void push(Stack q, int v);
int pop(Stack q);
int getSize(Stack q);
