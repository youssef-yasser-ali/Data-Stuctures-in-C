#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Queue.h"

void display(QueueEntry el){
    printf("%d " ,el);
}


int main()
{

Queue q;

createQueue(&q);
int el;

if(! queueFull(&q)){
enqueue(1,&q);
}

enqueue(2,&q);
enqueue(3,&q);
enqueue(4,&q);
enqueue(5,&q);

traverseQueue(&display,&q);

if(! queueEmpty(&q)){
dequeue(&el,&q);
}

printf("\n%d", el);

dequeue(&el,&q);

printf("\n%d",el);

dequeue(&el,&q);

printf("\n%d",el);

printf("\nQueue Size : %d",queueSize(&q));

clearQueue(&q);

printf("\nQueue Size After Clear : %d",queueSize(&q));


    return 0;
}
