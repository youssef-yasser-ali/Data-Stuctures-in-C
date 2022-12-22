#ifndef LINKED-LIST_H_INCLUDED
#define LINKED-LIST_H_INCLUDED

#define listEntry int


typedef struct listnode{

listEntry entry;

struct listnode *next;

}ListNode;




typedef struct list{

    int size ;
    ListNode *head;

}List;



void createList(List *pl);
int listEmpty(List *pl);
int listFull(List *pl);
int listSize(List *pl);
void destoyList(List *pl);
void traverseList(List *pl, void(*pf) (listEntry) );
void insertList(int pos , listEntry e , List *pl);
void deleteList(int pos , listEntry *pe , List *pl);
void retrieveList(int pos , listEntry *pe, List *pl);
void replaceList(int pos , listEntry e , List *pl);




#endif // LINKED-LIST_H_INCLUDED
