typedef struct BINTREE bintree;
extern bintree *mkNode( int key, int value, bintree *left, bintree *right);
extern void freeNode( bintree *tree);
extern void freeBinTree( bintree *tree);
extern void printBinTree( bintree *tree);
extern bintree *mergeBinTrees( bintree *tree1, bintree *tree2);
extern bintree *insertKey( int key, int value, bintree *tree);
extern bintree *deleteKey( int key, bintree *tree);
extern int findKey( int key, bintree *tree);
extern int findHeight(bintree *tree);
extern bintree *rightRotate(bintree *tree);
extern bintree *leftRotate(bintree *tree);
extern int max(int a, int b);
extern int getBalance(bintree *tree);
extern bintree *minValueNode(bintree *tree);
