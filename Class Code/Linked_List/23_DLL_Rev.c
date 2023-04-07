//Doubly Linked List Reverce Senario 1

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	struct node *prev;
	int data;
	struct node *next;
}node;

node *head = NULL;

node* createNode(){
	
	node *newNode = (node*)malloc(sizeof(node));

	newNode->prev = NULL;

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
		newNode->prev = temp;
	}
}

void dllrev(){
	
	if(head == NULL){
		printf("Linked List Empty.\n");
	}else{
		node *temp = head;

		while(temp->next != NULL){
			temp = temp->next;
		}

		while(temp->prev != NULL){
			printf("|%d|->",temp->data);
			temp = temp->prev;
		}
		printf("|%d|",temp->data);
		printf("\n");
	}
}

void printDLL(){

	if(head == NULL){

		printf("Linked List is Empty.\n");
	}else{
		node *temp = head;
		while(temp->next != NULL){
			printf("|%d|->",temp->data);
			temp= temp->next;
		}
		printf("|%d|",temp->data);
		printf("\n");
	}
}

void main(){
		
	int node;
	printf("Enter the no of nodes : ");
	scanf("%d",&node);

	for(int i = 1;i <= node;i++){
		addNode();
	}
	printf("\nBefore Reverce : ");
	printDLL();
	printf("\nAfter Reverce : ");
	dllrev();
	
}
