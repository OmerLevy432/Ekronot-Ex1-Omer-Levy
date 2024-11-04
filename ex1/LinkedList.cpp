#include <iostream>
#include "LinkedList.h"

/*
input: the linkedlist and its initial value
output: none
initializes the linkedlist
*/
void initLinkedList(LinkedList* list, unsigned int value)
{
	//sets the pointer to a null value
	list->value = value;
	list->next = nullptr;
}

/*
input: the pointer to the linkedlist and the value to insert
output: none
inserts a node before the first node in the linkedlist
*/
void insertFirstNode(LinkedList** list, unsigned int value)
{
	// initializes the node
	LinkedList* newLinkedList = new LinkedList;
	initLinkedList(newLinkedList, value);

	// makes the new node the first node in the linkedlist
	newLinkedList->next = *list;
	*list = newLinkedList;
}
