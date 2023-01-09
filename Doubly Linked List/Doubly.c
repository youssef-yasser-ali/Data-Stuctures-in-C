#include <stdlib.h>
#include "Doubly.h"


void createList(Doubly *D){
    (*D) = NULL ;

}

void insertList(int pos , typeEntry e ,Doubly *D  ){

    Node *p = (Node *) malloc(sizeof(Node)) ;

    if ( pos == 0 || (*D) == NULL){

        p->data = e ;
        p->next = (*D) ;
        p->pre = NULL ;
        (*D) = p ;



    }else {

    Node *q = (*D);
    int i =0;
    while(i< pos-1){
        q=q->next ;
        i++;

    }

    p->data = e ;

    p->next = q->next ;
    if(p->next){
    p->next->pre = p ;
    }
    q->next = p ;
    p->pre = q ;

    }

}


int listEmpty(Doubly *D){

  return  (*D) == NULL ;
}

int listFull(Doubly *D){
return 0 ;
}



void destoyList(Doubly *D){

    Node *q;

    while((*D)){

        q= (*D)->next;
        free((*D));
        (*D)=q;

    }

}


int listSize(Doubly *D){

    Node *q ;
    int i =0 ;
    for(i,q=(*D);q;i++)
       q = q->next;

    return i ;


}



void traverseList(Doubly *D, void(*pf) (listEntry) ){

    Node *p =(*D);
    while(p){

        (*pf)(p->data);
         p = p->next;
    }

}



void deleteList(int pos , typeEntry *pe , Doubly *D ){

if(pos ==0 ){

    *pe = (*D)->data ;


    Node *temp =(*D) ;
    (*D) =(*D)->next;
    free(temp);




}else{

    Node *q ;
    int i = 0 ;
    for(q = (*D) ,i=0;i<pos;i++)
        q = q->next;

        *pe = q->data ;
        q->pre->next = q->next ;
        q->next->pre = q->pre ;

        free(q);

}



}
