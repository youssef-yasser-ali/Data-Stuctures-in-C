#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define MAXQUEUE 100

typedef int QueueEntry ;


typedef struct queue{

    int front ;
    int rear;
    int size;
    QueueEntry enty[MAXQUEUE] ;

}Queue;


void createQueue( Queue *);
void enqueue(QueueEntry  , Queue *);
void dequeue(QueueEntry *,Queue *);
int queueEmpty(Queue *);
int queueFull(Queue *);
int queueSize(Queue * );
int clearQueue(Queue *);
void traverseQueue( void (*pf)(QueueEntry)  , Queue *);
#endif // QUEUE_H_INCLUDED
