#pragma once
#include <iostream>


typedef struct LinkedList
{
	unsigned int value;
	LinkedList* next;

} LinkedList;


// function prototypes
void initLinkedList(LinkedList* list, unsigned int value);
void insertFirstNode(LinkedList** list, unsigned int value);
