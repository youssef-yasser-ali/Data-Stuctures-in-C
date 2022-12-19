#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"


int stackSizeUser(Stack *ps){
 int a =0;

 void count(){
    a++;
}
   traverseStack(ps,&count);
return a ;
}




void stackTopUser(typeEntry *pe,Stack *ps){
     pop(pe,ps) ;
     push(*pe,ps);
}

void display(typeEntry e){
    printf("%d from display function \n", e) ;
}

int main()
{

  Stack s1;

  createStack(&s1);

    push(4,&s1);
    push(5,&s1);
    push(6,&s1);

    traverseStack( &s1, &display);

    int st,stUser,x,y,z,sizeUser;
    stackTop(&st,&s1);
    stackTopUser(&stUser,&s1);
    pop(&x,&s1);
    sizeUser = stackSizeUser(&s1);
    pop(&y,&s1);
    pop(&z,&s1);

    printf("%d from stack top\n",st);
    printf("%d from stack top user\n",stUser);
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    printf("stack size user  %d ",sizeUser);



    return 0;
}


