/*
Program 3. Write a program that accepts two singly linear linked lists
	from the user and concat the first N elements of the source linked list
	after the destination linked list.
	Input source linked list : |30|->|30|->|70|
	Input destination linked list : |10|->|20|->|30|->|40|
	Input number of elements : 2
	Output destination linked list : |10|->|20|->|30|->|40|->|30|->|30|
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	
	int data;
	struct Node *next;
}Node;

Node *head1 = NULL:
Node *head2 = NULL;


