/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

	struct node * removeEveryKthNode(struct node *head, int K) {
		if (head == NULL)
			return NULL;
		if (K <= 0)
			return NULL;
		if (K == 1)
			return NULL;
		int i = 0;
		node * start = head;
		while (head != NULL)
		{
			if (K % 2 != 0)
			if (head->next == NULL)
				break;
			if ((i + 2) % K == 0)
			{
				head->next = head->next->next;
			}
			else
				head = head->next;
			i++;
		}
		return start;
	}