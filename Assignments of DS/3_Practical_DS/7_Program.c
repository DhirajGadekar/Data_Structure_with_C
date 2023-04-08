/*
 Program 7.
	Write a program that accepts a doubly linear linked list from the user.
	Reverse the data elements from the linked list.
	Input: linked list: |Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
	Output : linked list |ihsahS|-> |hsihsA|->|ahnaK|->|luhaR|->|ehdaB|
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	struct node *prev;
	char str[20];
	struct node *next;
}node;

node *head = NULL;

node* createNode(){
	
	node *newNode = (node*)malloc(sizeof(node));

	newNode->prev = NULL;

	printf("Enter the Name : ");
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
		(*newNode).str[i++] = ch;
	}
	
	newNode->next =NULL;
	
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
		newNode->prev = temp;
		temp->next = newNode;
	}	
}

char* mystrrev(char *str){
	char *temp = str;
	char ch = 0;

	while(*temp != '\0'){
		temp++;
	}
	temp--;

	while(str < temp){
		
		ch = *str;
		*str = *temp;
		*temp = ch;

		str++;
		temp--;
	}
	return str;
	
}

void namereverse(){
	
	if(head == NULL){
		printf("Linked List is Empty.\n");
	}else{
		node *temp = head;
		while(temp != NULL){
			
			mystrrev(temp->str);
			temp = temp->next;
		}

	}
}

void printDLL(){

	node *temp = head;
	
	if(head == NULL){
		printf("Linked List is Empty.\n");
	}else{
		while(temp->next != NULL){

			printf("|%s|->",temp->str);
			temp = temp->next;
		}
		printf("|%s|\n",temp->str);
	}
}

void main(){
	
	int node;
	printf("Enter the node : ");
	scanf("%d",&node);
	getchar();
	for(int i = 1;i <= node;i++){
		addNode();
	}
	printf("\nBefore Reverce : ");
	printDLL();
	namereverse();
	printf("\nAfter Reverce : ");
	printDLL();
}
