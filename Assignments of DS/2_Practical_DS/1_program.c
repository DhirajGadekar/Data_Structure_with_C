/*
 Program 1.
	Write a program that searches for the first occurrence of a particular
	element from a singly linear linked list.
	Input linked list: |10|->|20|->|30|->|40|->|50|->|30|->|70|
	Input: Enter element: 30
	Output : 3
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *head = NULL;

node* createNode(){
	
	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter the Data : ");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){
	
	node *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		node *temp = head;

		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

int fOccur(int num){

	node *temp = head;
	int count = 0,flag = 0;
	if(head == NULL){
		printf("Linked List is Empty.\n");

	}else{

		while(temp != NULL){
			count++;
			if(temp->data == num){
				flag = 1;
				printf("Position : %d\n",count);
				return -1;
			}
			temp = temp->next;
		}
		if(flag == 0){
			printf("Element NOT FOUND in Linked List.\n");
		}
	}
}

void main(){
	
	int node,num;
	printf("Enter the Node : ");
	scanf("%d",&node);

	for(int i = 1;i <= node;i++){
		addNode();
		
	}
	printf("Enter the Element : ");
	scanf("%d",&num);
	fOccur(num);
}
