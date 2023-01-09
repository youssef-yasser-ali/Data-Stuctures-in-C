#include <stdlib.h>
#ifndef DOUBLY_H_INCLUDED
#define DOUBLY_H_INCLUDED

typedef int typeEntry ;

typedef struct node {

    typeEntry data ;
    struct node *next ;
    struct node *pre ;

}Node;

typedef Node* Doubly ;


void createList(Doubly *);
int listEmpty(Doubly *);
int listFull(Doubly *);
int listSize(Doubly *);
void destoyList(Doubly *);
void traverseList(Doubly *, void(*pf) (typeEntry) );
void insertList(int pos , typeEntry e , Doubly *);
void deleteList(int pos , typeEntry *pe , Doubly *);



#endif // DOUBLY_H_INCLUDED
