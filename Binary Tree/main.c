#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

void display( typeEntry el){

    printf("%d ", el );
}


int main()
{
    Tree t ;
    createTree(&t);


    treeInsert(&t,3);
    treeInsert(&t, 1);
    treeInsert(&t, 4);
    treeInsert(&t, 5);


    treeInsert(&t, 3);
    treeInsert(&t, 7);
    treeInsert(&t, 0);



   inOrderRec(&t ,&display);






    return 0;
}
