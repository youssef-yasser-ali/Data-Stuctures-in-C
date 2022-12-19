#include "Stack_linked.h"
#include <stdio.h>
#include <stdlib.h>

void createStack(Stack *ps){

    ps->top =NULL ;
    ps->Size=0;

}

void push(typeEntry item,Stack *ps){

    StackNode *p =(StackNode*) malloc(sizeof(StackNode));

    p->entry = item;
    p->next = ps->top;
    ps->top = p;
    ps->Size++;

}
void pop( typeEntry *pe,Stack *ps){
   *pe =  ps->top->entry;

   StackNode *temp = ps->top ;
   ps->top = temp->next;
   free(temp);
   ps->Size--;

}
int stackEmpty(Stack *ps){

return ps->top ==NULL;

}
int stackFull(Stack *ps ){
    return 0;
}
void clearStack(Stack *ps){

    StackNode *q =ps->top ;
    StackNode *temp = q ;

while(q){
    q=q->next;
    free(temp);
    temp = q;

}
ps->top = NULL;
ps->Size = 0 ;

}

void traverseStack(Stack *ps ,void (*pf)(typeEntry)){

    StackNode *p = ps->top ;
    while(p){
        (*pf)(p->entry);
        p=p->next;
    }
}

int stackSize(Stack *ps){

    return ps->Size;
}

void stackTop( typeEntry *pe,Stack *ps);

