#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Queue.h"


void createQueue(Queue *pq){
    pq->front =0;
    pq->rear = -1;
    pq->size =0;
}


void enqueue(QueueEntry el , Queue *pq){

   pq->rear = ( pq-> rear + 1 )  % MAXQUEUE ;

   pq->enty[pq->rear] = el ;
   pq->size++;

}


void dequeue(QueueEntry *el ,Queue *pq){
   *el = pq->enty[pq->front] ;
   pq->front = (pq->front + 1) % MAXQUEUE ;
   pq->size--;
}


int queueEmpty(Queue *pq){

    return !pq->size;

}


int queueFull(Queue *pq){

    return (pq->size == MAXQUEUE) ;
}


int queueSize(Queue *pq ){

    return pq->size;
}


int clearQueue(Queue *pq){

    pq->front =0;
    pq->rear = -1;
    pq->size =0;

}


void traverseQueue( void (*pf)(QueueEntry)  , Queue *pq){

    int pos ,s ;
    for(pos = pq->front ,s=0 ;s<pq->size ; s++){
        (*pf) (pq->enty [pos]);
        pos = (pos+1) % MAXQUEUE;

    }
}
