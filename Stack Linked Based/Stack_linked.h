#ifndef STACK_LINKED_H_INCLUDED
#define STACK_LINKED_H_INCLUDED

typedef int typeEntry;

typedef struct stackNode {

    typeEntry entry;
    struct stackNode *next;

}StackNode;



typedef struct stack{

    StackNode *top ;

}Stack;



int stackSize(Stack *);
int stackFull(Stack * );
int stackEmpty(Stack *);
void createStack(Stack *);
void push(typeEntry ,Stack *);
void pop( typeEntry *,Stack *);
void stackTop( typeEntry *,Stack *);
void clearStack(Stack *);
void TraverseStack(Stack * ,void (*pf)(typeEntry));



#endif // STACK_LINKED_H_INCLUDED
