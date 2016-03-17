/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>

struct node {
	int num;
	struct node *next;
};
struct node* find_positio(struct node*, int);
void delete_position(struct node*, struct node*);
struct node * removeEveryKthNode(struct node *head, int k) {
	if (head == NULL || k <= 1)
		return NULL;
	else
	{
		int i;
		struct node* temp1 = head;
		struct node* pos;
		pos = find_positio(temp1, k);
		while (temp1 != NULL&&pos != NULL)
		{
			delete_position(temp1, pos);
			for (i = 0; i < k; i++)
			{
				if (pos->next != NULL){
					pos = pos->next;
				}
				else
				{
					pos = NULL;
					break;
				}
			}
		}
		return head;
	}
}
struct node* find_positio(struct node* x, int k)
{
	int i;
	struct node* t = x;
	for (i = 1; i<k; i++)
	{
		if (t != NULL)
			t = t->next;
		else
			return NULL;
	}
	return t;
}
void delete_position(struct node* n, struct node* pos){
	struct node* temp1 = n;
	if (temp1 == pos)
		temp1 = temp1->next;
	else
	{
		while (temp1->next != pos)
			temp1 = temp1->next;
		temp1->next = pos->next;
	}
}