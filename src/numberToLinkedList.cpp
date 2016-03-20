/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	node * start = NULL, *current = NULL;
	if (N < 0)
	{
		N = -(N);
	}
	if (N == 0)
	{
		start = (node *)malloc(sizeof(node));
		start->num = 0;
		start->next = NULL;
		return start;
	}
	while (N != 0)
	{
		if (start == NULL)
		{
			start = (node *)malloc(sizeof(node));
			start->num = N % 10;
			start->next = NULL;
			current = start;
		}
		else
		{
			node * temp = (node *)malloc(sizeof(node));
			temp->num = N % 10;
			temp->next = current;
			current = temp;
			start = temp;
		}
		N = N / 10;
	}
	return start; 
}