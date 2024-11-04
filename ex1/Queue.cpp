#include "Queue.h"

/*
input: the queue to init and the size of the queue
output: none
initialize the queue
*/
void initQueue(Queue* q, unsigned int size)
{
	q->index = 0;
	q->size = size;
	q->data = new unsigned int[size];
}

/*
input: the queue to empty
output: none
empties the queue
*/
void cleanQueue(Queue* q)
{
	int i = 0;

	// goes over all the items in the queue and resets them to 0
	for (i = 0; i < q->index; i++)
	{
		q->data[i] = 0;
	}

	// frees the memory and deletes the pointer
	delete q->data;
	q = nullptr;
	delete q;
}

/*
input: the queue and the value to put in it
output: none
puts a value in the queue
*/
void enqueue(Queue* q, unsigned int newValue)
{
	// checks if the queue isn't full
	if (!isFull(q))
	{
		// puts the value in the queue
		q->data[q->index++] = newValue;
	}
}

/*
input: the queue
output: the element at the top of the queue
gets the first element in the queue
*/
int dequeue(Queue* q)
{
	if (isEmpty(q))
	{
		return EMPTY;
	}

	int topElement = q->data[0];
	int i = 0;

	// shifts all the elements in the queue array to the right
	for (i = 0; i < q->index; i++)
	{
		q->data[i] = q->data[i + 1];
	}

	// decreases the index of the queue insertion
	q->index--;

	// returns the element at the top of the queue
	return topElement;
}

/*
input: the queue
ouput: true if the queue is empty else false
checks if the queue is empty
*/
bool isEmpty(Queue* q)
{
	return !q->index;
}

/*
input: the queue
ouput: true if the queue is full else false
checks if the queue is full
*/
bool isFull(Queue* q)
{
	return q->index == q->size;
}