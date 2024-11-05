#include "Utils.h"
#include "Stack.h"
#include <iostream>

/*
input: an array of ints and the size of it
output: none
reverses the array
*/
void reverse(int* nums, unsigned int size)
{
	// creates the stack to reverse the order of the array
	Stack* placeHolder = new Stack;
	initStack(placeHolder);
	int i = 0;

	// adds all the items from the array to the stack
	for (i = 0; i < size; i++)
	{
		push(placeHolder, nums[i]);
	}

	// adds the items back to the array in reverse order
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(placeHolder);
	}

	// destroys the stack
	cleanStack(placeHolder);
}

/*
input: none
output: array of numbers
return an array of 10 numbers in reverse order
*/
int* reverse10()
{
	int* numbers = new int[10];
	int i = 0;

	// gets the 10 numbers from the user 
	for (i = 9; i > 0; i--)
	{
		// gets the number from the user
		std::cout << "Enter a number: ";
		std::cin >> numbers[i];
		std::cout << "\n";
	}

	return numbers;
}