#ifndef STACK
#define STACK

#define MAX 500
typedef int type;
typedef struct queue
{
    int front;
    int rear;
    int size;
    type items[MAX];
}Queu;
//********************************************
//create
void create(Queu *q);
//********************************************
//is full
int isFull(Queu q);
//********************************************
//size
int QueueSize(Queu q);
//*********************************************
//is empty
int isEmpty(Queu q);
//**********************************************
//inqueu
void inQueu(Queu *q,type el);
//************************************************
//dequeu
type deQueu(Queu *q);
//**************************************************
//traverse
void traverse(Queu *q,void(*F)(type *el));
#endif // STACK







