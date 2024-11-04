#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"


/* a queue contains positive integer values. */
typedef struct Queue
{
	LinkedList head;
	
} Queue;

void initQueue(Queue* q);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);

#endif /* QUEUE_H */