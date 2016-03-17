/*

Use MainLinkedLists1 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.s

Do not write same add,display function in every CppFile .VS throws an error if two files
have some functions with same signature.
You can either change the signature in each file by using add1,display2 like that or 
keep a common header file which has functions for handling common tasks for debugging
like displaying and include that header file in each Problem file .

Only jump into this lesson after you did all specified functions in Tutorial Lesson.

Objectives of C-LinkedLists-1 Lesson:

->Add/Delete/Display nodes in SLL
->Manipulate Links in SLL
->Handling SLL which have nodes of more than one data field


*/


//Do not edit below Header Files
#include <stdio.h>
#include<malloc.h>
#include "FunctionHeadersLinkedLists1.h"
struct node {
	int num;
	struct node *next;
};
struct node * createNode(int num) {
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->num = num;
	newNode->next = NULL;
	return newNode;
}

struct node * createList(int num) {
	struct node *head = createNode(num % 10);
	num /= 10;
	while (num) {
		struct node *newNode = createNode(num % 10);
		newNode->next = head;
		head = newNode;
		num /= 10;
	}
	return head;
}
int main(){

	//Test 012SortSll

	//Test numberToLinkedList
	
	//Test removeEveryKthNode
	struct node *head1 = createList(1234);
	sortLinkedList(head1);
	//Test sortLinkedList

	//Test twodigitLinkedList
	
	return 0;
}