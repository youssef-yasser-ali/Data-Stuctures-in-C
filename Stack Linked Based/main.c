#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Stack_linked.h"

void display(typeEntry el){

printf("display function %d \n",el);

}

int main()


{

Stack s1;
createStack(&s1);

push(7,&s1);
push(6,&s1);
push(5,&s1);
push(4,&s1);

int el ;

pop(&el,&s1);
printf("%d \n",el);


TraverseStack(&s1,display);


    return 0;
}



