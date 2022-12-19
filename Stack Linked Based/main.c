#include <stdio.h>
#include <stdlib.h>
#include "Stack_linked.h"

void display(typeEntry el){

printf("display function %d \n",el);

}

int main()
{

    Stack s1;
    createStack(&s1);

    int popel ;

    push(3,&s1);
    push(4,&s1);

    traverseStack(&s1,&display);

    pop(&popel,&s1);
    printf("%d",popel);




    return 0;
}
