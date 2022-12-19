#ifndef STACK_LINKED_H_INCLUDED
#define STACK_LINKED_H_INCLUDED

typedef int typeEntry;

typedef struct stackNode {

    typeEntry entry;
    struct stackNode *next;

}StackNode;



typedef struct stack{

    StackNode *top ;
    int Size ;

}Stack;



int stackSize(Stack *ps);
int stackFull(Stack *ps );
int stackEmpty(Stack *ps);
void createStack(Stack *ps);
void push(typeEntry item,Stack *ps);
void pop( typeEntry *pe,Stack *ps);
void stackTop( typeEntry *pe,Stack *ps);
void clearStack(Stack *ps);
void traverseStack(Stack *ps ,void (*pf)(typeEntry));



#endif // STACK_LINKED_H_INCLUDED
