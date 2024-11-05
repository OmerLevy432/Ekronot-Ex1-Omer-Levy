#include "Stack.h"
#include "Linkedlist.h"

/*
input: the stack to initiate
output: none
initiate a stack
*/
void initStack(Stack* s)
{
	s->head = nullptr;
}

/*
input: the stack
output: none
cleans the stack
*/
void cleanStack(Stack* s)
{
	LinkedList* current = s->head;
	LinkedList* prev = nullptr;

	// frees the linkedlist
	while (current)
	{
		prev = current;
		current = current->next;

		delete prev;
	}

	// deletes the pointer
	s = nullptr;
	delete s;
}

/*
input: the stack and the element to push
output: none
pushes an element onto the stack
*/
void push(Stack* s, unsigned int element)
{
	// creates a pointer to the head of the stack
	LinkedList** pointerToStackHead = &s->head;

	// adds the element
	insertFirstNode(pointerToStackHead, element);
}

/*
input: the stack
output: the element at the top
pops an element from the top of the stack
*/
int pop(Stack* s)
{
	if (isEmpty(s))
	{
		return EMPTY;
	}

	// gets the element from the top of the stack
	int element = s->head->value;

	// removes the element from the top
	s->head = s->head->next;

	return element;
}

/*
input: the queue
output: true if its empty else false
checks if the queue is empty
*/
bool isEmpty(Stack* s)
{
	return s->head == nullptr;
}

