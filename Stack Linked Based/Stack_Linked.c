#include "Stack_linked.h"
#include <stdio.h>
#include <stdlib.h>

void createStack(Stack *ps){

    ps->top =NULL ;

}

void push(typeEntry item,Stack *ps){

    StackNode *p =(StackNode*) malloc(sizeof(StackNode));
    p->entry = item;
    p->next = ps->top;
    ps->top = p;



}
void pop( typeEntry *pe,Stack *ps){

	StackNode *p;

	*pe=ps->top->entry;
	p=ps->top;
	ps->top=ps->top->next;
	free(p);


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
}

void TraverseStack(Stack *ps, void (*pf)(typeEntry)){

	for(StackNode *p=ps->top; p; p=p->next)
		(*pf)(p->entry);

}

int	StackSize(Stack *ps){
  int x;
  StackNode *ptrs =ps->top;
  for(x=0; ptrs; ptrs=ptrs->next)
    x++;
  return x;
}

void stackTop( typeEntry *pe,Stack *ps){

        *pe=ps->top->entry;
}

