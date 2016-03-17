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
void insert(int);
struct node {
	int num;
	struct node *next;
};
struct node *head;

struct node * numberToLinkedList(int n){
	int x;
	head = NULL;
	if (n == 0){
		insert(n);
	} 
	else if (n > 0 || n < 0){
		if (n < 0)
			n = -n;
		while (n>0){
			x = n % 10;
			insert(x);
			n = n / 10;
		}
	}	
	return head;
}
void insert(int n){
	node* temp = (node*)malloc(sizeof(node));
	temp->num = n;
	temp->next = head;
	head = temp;
}