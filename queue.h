#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q , int size){
    q->size= size;
    q->Q=(int *)malloc(q->size* (sizeof(int)));
    q->front=q->rear=-1;
}

void enqueue(struct Queue *q, int data)
{
    if(q->front == -1 || q->rear == -1)
    {
        q->front=q->rear=0;

    }
    else
    q->rear++;
    q->Q[q->rear]=data;
}
void dequeue(struct Queue *q)
{
    q->front++;
    return;
}

void display (struct Queue q)
{    int i;
     printf("\n");
    for(i=q.front;i<=q.rear;i++)
    {
        printf("%d ",q.Q[i]);
    }
}


#endif // QUEUE_H_INCLUDED
