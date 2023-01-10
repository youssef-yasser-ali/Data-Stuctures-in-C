#include <stdio.h>
#include <stdlib.h>
#include "Queue_linked.h"


void display(QueueEntry el ){


    printf("%d ", el );

}


int main()
{

Queue q ;
int a ;

createQueue(&q);

enqueue(3, &q);
enqueue(4, &q);
enqueue(5, &q);
enqueue(6, &q);
enqueue(7, &q);
enqueue(8, &q);

traverseQueue(&display, &q);

dequeue(&a,&q);


printf("\nafter dequeue (element %d ):\n", a);

traverseQueue(&display, &q);

    return 0;
}
