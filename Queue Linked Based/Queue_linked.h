#ifndef QUEUE_LINKED_H_INCLUDED
#define QUEUE_LINKED_H_INCLUDED
typedef int QueueEntry  ;

typedef struct queuenode {
    QueueEntry data ;
    struct node * next ;

}QueueNode ;


typedef struct{

    QueueNode *front ;
    QueueNode *rear ;
    int size ;

}Queue;




void createQueue( Queue *);
void enqueue(QueueEntry  , Queue *);
void dequeue(QueueEntry *,Queue *);
int queueEmpty(Queue *);
int queueFull(Queue *);
int queueSize(Queue * );
int clearQueue(Queue *);
void traverseQueue( void (*pf)(QueueEntry)  , Queue *);


#endif // QUEUE_LINKED_H_INCLUDED
