#include "Stack.h"

int stackSize(Stack *ps){
return  ps->top;
}

int stackFull(Stack *ps ){

    if(ps->top == maxEntry) return 1;
    else return 0;

}

int stackEmpty(Stack *ps){
    if(ps->top == 0)  return 1;
    else return 0;

}

void createStack(Stack *ps){
    ps->top =0;
}

void push(typeEntry item,Stack *ps){
    ps->entry[ps->top++] = item;
}

void pop( typeEntry *pe,Stack *ps){

    *pe = ps->entry[--ps->top];
}

void stackTop( typeEntry *pe,Stack *ps){

    *pe = ps->entry[ps->top-1];
}

void clearStack(Stack *ps){
ps->top = 0;

}

void traverseStack(Stack *ps ,void (*pf)(typeEntry)){

for (int i= ps->top ; i> 0 ;i--){

    (*pf)(ps->entry[i-1]);
}

}




