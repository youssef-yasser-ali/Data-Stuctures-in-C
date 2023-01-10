#include <stdlib.h>
#include "Queue_linked.h"




void createQueue( Queue *q){

    q->front = NULL ;
    q->rear = NULL ;
    q->size = 0 ;

}
void enqueue(QueueEntry e , Queue *pq){

    QueueNode *pn =(QueueNode*) malloc(sizeof(QueueNode)) ;
    pn->data = e ;
    pn->next = NULL;


    if(!pq->rear)
        pq->front = pn ;
    else
        pq->rear->next = pn ;

    pq->rear = pn ;
    pq->size++ ;

}
void dequeue(QueueEntry *el,Queue *pq){

    QueueNode  *temp = pq->front;
    *el = temp->data ;

    pq->front =  temp->next ;
    free(temp);

    if(!pq->front)
        pq->rear = NULL ;

    pq->size-- ;

}
int queueEmpty(Queue *pq){

    return !pq->front ;


}
int queueFull(Queue *pq){

    return 0 ;

}
int queueSize(Queue *pq ){
    return pq->size ;

}
int clearQueue(Queue *pq){

    while(pq->front){

        pq->rear = pq->front->next ;
        free(pq->front);
        pq->front = pq->rear ;
    }
    pq->size = 0 ;

}
void traverseQueue( void (*pf)(QueueEntry)  , Queue *pq){

    QueueNode *pn ;

    for(pn= pq->front ; pn ;pn=pn->next)

    (*pf)(pn->data);


}





