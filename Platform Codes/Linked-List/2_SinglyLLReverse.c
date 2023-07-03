/*
 Program 2 :
 	Write a program in C to create a singly linked list of n nodes and display it in reverse order.
	
	Test Data :
		Input the number of nodes : 3
		Input data for node 1 : 5
		Input data for node 2 : 6
		Input data for node 3 : 7
	
	Expected Output :
		Data entered in the list are : |5|->|6|->|7|                                                                                                     
                                                                                                              
 		The list in reverse are : |7|->|6|->|5|
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

	printf("Enter the data : ");
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

void reverseSinglyLinkedList() {

	if(head == NULL) {
		
		printf("Linked List Empty\n");
	} else {
		node *temp1 = head;
		node *temp2 = NULL;

		while(head->next != NULL) {
		
			head = head->next;
			temp1->next = temp2;
			temp2 = temp1;
			temp1 = head;
		}
		head->next = temp2;
	}
}

void printSLL() {
	
	if(head == NULL) {
		
		printf("Linked List is Empty\n");
	} else {
		
		node *temp = head;

		while(temp->next != NULL) {

			printf("|%d|->",temp->data);
			temp = temp->next;
		}

		printf("|%d|\n",temp->data);
	}
}
void main() {
	
	char ch;
	do {
		int choice;
		printf("\n1.Add Nodes.\n2.Linked List Reverse\n3.Print Linked-List\n");
		
		printf("\nEnter your Choice : ");
		scanf("%d",&choice);

		switch(choice) {

			case 1 : 
				int num;
				printf("\nEnter the Number of Nodes : ");
				scanf("%d",&num);

				for(int i = 0; i < num; i++) {
					
					addNode();
				}
				break;

			case 2 :
				reverseSinglyLinkedList();
				break;

			case 3 : 
				printSLL();
				break;

			default :
				printf("Wrong Choice\n");
				break;

		}	

		getchar();
		printf("\nDo you want continue?");
		scanf("%c",&ch);
	} while(ch == 'y' || ch == 'Y');
}
