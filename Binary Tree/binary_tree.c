#include <stdlib.h>
#include "binary_tree.h"

void createTree(Tree *pt){
    *pt = NULL;
}
int treeEmpty(Tree *pt){
    return (!*pt);
}

int treeFull(Tree *pt)
{
    return 0 ;
}

void inOrderRec(Tree *pt, void(*pf)(typeEntry))
{

    if(*pt)
    {
        inOrderRec(&(*pt)->left, pf);
        (*pf)((*pt)->data);
        inOrderRec(&(*pt)->right , pf);
    }


}
void preOrderRec(Tree *pt , void (*pf) (typeEntry)){


    if(*pt)
    {
        (*pf)((*pt)->data);
        inOrderRec(&(*pt)->left, pf);
        inOrderRec(&(*pt)->right , pf);
    }

}

void postOrderRec(Tree *pt , void (*pf) (typeEntry)){


    if(*pt)
    {
        inOrderRec(&(*pt)->left, pf);
        inOrderRec(&(*pt)->right , pf);
        (*pf)((*pt)->data);
    }

}


void clearTree(Tree *pt){

if(*pt){

        clearTree(&(*pt)->left);
        clearTree(&(*pt)->right);
        free(*pt);
        *pt= NULL ;
}
}


int treeSize(Tree *pt){

    if (!*pt)
        return 0 ;


    return (1+treeSize(&(*pt)->left)+ treeSize(&(*pt)->right));

}



int treeDepth(Tree *pt){
    if(!pt)
        return ;

    int a = treeDepth(&(*pt)->left);
    int b = treeDepth(&(*pt)->right);

    return (a>b) ? 1+ a : 1+b ;

}



void treeInsertRec(Tree *pt,typeEntry e)
{
    if(!*pt)
    {

        *pt=  (Tree)malloc(sizeof(Tree));

        (*pt)->data = e ;
        (*pt)->left = NULL ;
        (*pt)->right = NULL ;

    }
    else if( e < (*pt)->data )
    {
        treeInsertRec(&(*pt)->left ,e );
    }
    else
    {
        treeInsertRec(&(*pt)->right ,e );

    }

}

void treeInsert(Tree *pt, typeEntry e)
{

    Tree p =  (Tree)malloc(sizeof(Tree));
    p->data = e ;
    p->left = NULL ;
    p->right = NULL ;

    if(!(*pt))
    {
        *pt = p ;

    }
   else
    {

       Tree prv, cur ;

        cur = (*pt) ;

        while(cur)
        {
            prv = cur ;

            if(e < cur->data )
                cur = cur->left ;
            else
                cur = cur->right ;

        }

        if (e < prv->data)
            prv->left = p ;
        else
            prv->right = p ;

    }


}




