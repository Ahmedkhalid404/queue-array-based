#include <stdio.h>
#include <stdlib.h>
#include "data structure.h"
//create
void create(Queu *q){
    q->front = 0;
    q->rear = MAX - 1;
    q->size = 0;
}
//********************************************
//is full
int isFull(Queu q){
    return q.size == MAX;
}
//*********************************************
//is empty
int isEmpty(Queu q)
{
    return q.size == 0;
}
//**********************************************
//size
int QueueSize(Queu q){
    return q.size;
}
//**********************************************
//inqueu
void inQueu(Queu *q,type el){
    if(!isFull(*q))
    {
        q->rear = (q->rear + 1) % MAX;
        q->items[q->rear] = el;
        q->size++;
    }
    else
        printf("Error:queue overflow\n");
}
//************************************************
//dequeu
type deQueu(Queu *q){
    if(!isEmpty(*q))
    {
        type item = q->items[q->front];
        q->front = ( q->front + 1 ) % MAX;
        q->size--;
        return item;

    }
    else
    {
        printf("Error:queue underflow\n");
        return -404;
    }
}
//**************************************************
//traverse
void traverse(Queu *q,void(*F)(type *el))
{
    for(int i=0,realItem = q->front ; i < (q->size) ; i++,realItem = (realItem + 1) % MAX )
    {
        (F)(&q->items[realItem]);
    }
}







