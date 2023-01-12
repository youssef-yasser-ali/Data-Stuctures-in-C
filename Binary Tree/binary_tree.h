#ifndef BINARY_TREE_H_INCLUDED
#define BINARY_TREE_H_INCLUDED
typedef int typeEntry ;


typedef struct node{

    typeEntry data ;
    struct node *right , *left ;


}TreeNode;

typedef TreeNode *Tree ;






void createTree(Tree *);
int treeEmpty(Tree *);
int treeFull(Tree *);
void inOrderRec(Tree *t , void(*pf) (typeEntry));
void preOrderRec(Tree *pt , void (*pf) (typeEntry));
void postOrderRec(Tree *pt , void (*pf) (typeEntry));
void clearTree(Tree *pt);
int treeSize(Tree * );
int treeDepth(Tree * );
void treeInsertRec(Tree * , typeEntry e);
void treeInsert(Tree * , typeEntry e);

#endif // BINARY_TREE_H_INCLUDED
