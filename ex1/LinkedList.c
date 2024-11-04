#include "LinkedList.h"
#include <iostream>


/*
input: the linkedlist and its initial value
output: none
initializes the linkedlist
*/
void initLinkedList(LinkedList* list, int value)
{
	list->value = value;
}

/*
input: the pointer to the linkedlist and the value to insert
output: none
inserts a node before the current node in a linkedlist
*/
void insertFirstNode(LinkedList** list, int value)
{
	// initializes the new node
	LinkedList* newLinkedList = new LinkedList;
	initLinkedList(newLinkedList, value);

	// makes the new node the first node in the linkedlist
	newLinkedList->next = *list;
	*list = newLinkedList;
}
