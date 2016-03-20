/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){

	node * start = head;
	int a = 0, b = 0, c = 0;
	while (head != NULL)
	{
		if (head->data == 0)
			a++;
		else if (head->data == 1)
			b++;
		else if (head->data == 2)
			c++;
		head = head->next;
	}
	for (int i = 0; i < a; i++)
	{
		start->data = 0;
		start = start->next;
	}
	for (int i = 0; i < b; i++)
	{
		start->data = 1;
		start = start->next;
	}
	for (int i = 0; i < c; i++)
	{
		start->data = 2;
		start = start->next;
	}

}