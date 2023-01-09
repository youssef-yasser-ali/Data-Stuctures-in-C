#include <stdio.h>
#include <stdlib.h>
#include "Doubly.h"



void display(typeEntry el){
printf("%d ", el);
}



int main()
{
    Doubly d ;
    createList(&d);




int a = 1 ;
int b = 2;
int c = 3 ;
int e = 4 ;
int delc ;
int dela ;

insertList(0,a,&d);
insertList(1,b,&d);
insertList(2,c,&d);
insertList(3,e,&d);

printf("the double after insert \n");
traverseList(&d,&display);



deleteList(2,&delc,&d);
deleteList(0,&dela,&d);


printf("the double after deleted in position 2 and 0 el %d and %d :\n" , delc ,dela);

traverseList(&d,&display);


printf("\nsize of double : %d", listSize(&d));

destoyList(&d);

printf("\nsize of double after destroy: %d", listSize(&d));



    return 0;
}
