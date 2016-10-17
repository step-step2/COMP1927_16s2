// BST ADT
// Don't touch this bit please

typedef struct tree* Tree;

Tree createTree();
void destroyTree(Tree t);
Tree insert(Tree t, int v);
void getKthSmallest(Tree t, int* k, int** v);
