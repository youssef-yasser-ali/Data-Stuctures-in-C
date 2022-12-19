#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef char typeEntry;

#define maxEntry 100



typedef struct stack{

    int top ;
    typeEntry entry[maxEntry];

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

#endif // STACK_H_INCLUDED


