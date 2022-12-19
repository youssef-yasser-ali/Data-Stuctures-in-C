#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"



void createList(List *pl){
    pl->head = NULL;
    pl->size=0;
}
int listEmpty(List *pl){
    return (pl->size ==0);
}
int listFull(List *pl){

    return 0;

}
int listSize(List *pl){
return  pl->size ;
}
void destoyList(List *pl){

    ListNode *q;

    while(pl->head){

        q= pl->head->next;
        free(pl->head);
        pl->head=q;

    }
    pl->size = 0 ;
}
void traverseList(List *pl, void(*pf) (listEntry) ){

    ListNode *p = pl->head;
    while(p){

        (*pf)(p->entry);
         p = p->next;
    }

}
void insertList(int pos , listEntry e , List *pl){

    ListNode *p, *q;
    int i ;

    if(p = (ListNode *) malloc(sizeof(ListNode))){
    p->entry = e;
    p->next = NULL;

    if(pos ==0 ){

            p->next = pl->head;
            pl->head= p;
    }else{

    for(q = pl->head , i=0;i<pos-1;i++)
        q= q->next;

        p->next=q->next;
        q->next = p;
    }

    pl->size++;
    return 1;
    }
    else return 0;
}
void deleteList(int pos , listEntry *pe , List *pl){

    ListNode *q , *tmp ;
    int i ;
    if(pos == 0 )
{
    *pe  = pl->head->entry;
    tmp = pl->head->next;
    free(pl->head);
    pl->head = tmp;




}else{


    for(q = pl->head ,i=0;i<pos-1;i++)
        q = q->next;

    *pe = q->next->entry;
    tmp = q->next->next;
    free(q->next);
    q->next = tmp;

}


    pl->size--;

}
void retrieveList(int pos , listEntry *pe, List *pl){
    ListNode *q ;
    int i ;


    for(q = pl->head ,i=0;i<pos;i++)
        q = q->next;


    *pe = q->entry;

}
void replaceList(int pos , listEntry e , List *pl){

    int i ;
    ListNode *q ;

    for(q = pl->head ,i = 0 ; i<pos ;i++)
        q = q->next;

    q->entry = e;
}

