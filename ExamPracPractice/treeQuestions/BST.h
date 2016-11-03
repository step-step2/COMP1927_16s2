// BST ADT
// Don't touch this bit please

typedef struct tree* Tree;

Tree createTree();
void destroyTree(Tree t);
void getKthSmallest(Tree t, int* k, int** v);
Tree insert(Tree t, int v);
Tree buildTree(Tree t, int* vals, int n);
