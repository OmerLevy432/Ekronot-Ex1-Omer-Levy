#pragma once

typedef struct LinkedList
{
	int value;
	LinkedList* next;

} LinkedList;


// function prototypes
void initLinkedList(LinkedList* list, int value);
