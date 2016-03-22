/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
void swap(struct node * a, struct node * b)
{
	int temp = a->num;
	a->num = b->num;
	b->num = temp;
}

struct node * sortLinkedList(struct node *head) {
	node * temp1;
	node * temp2;
	if (head == NULL)
	{
		return NULL;
	}
	temp1 = head;
	temp2 = head;
	for (; temp1 != NULL; temp1 = temp1->next)
	{
		for (; temp2 != NULL; temp2 = temp2->next)
		{
			if ((temp1->num) < (temp2->num))
			{
				swap(temp1, temp2);
			}
		}
		temp2 = head;
	}
	return head;
}
