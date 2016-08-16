typedef struct stack* Stack;
typedef struct node* Node;

Stack createStack();
Node createNode();

int sizeS(Stack s);
void pushS(Stack s, int v);
int popS(Stack s);

