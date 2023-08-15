#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	
	int data;
	struct node *next;
}node;

node *head = NULL;

node* createNode() {
	
	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter the data : ");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}
void addNode() {
	
	node *newNode = createNode();
	if(head == NULL) {
		
		head = newNode;
	} else {
		
		node *temp = head;
		while(temp->next != NULL) {
			
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
int countNode() {
	
	int count = 0;
	node *temp = head;
	while(temp != NULL) {
		
		count++;
		temp = temp->next;
	}
	return count;
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
		printf("|%d|\n",);
	}
}
void main() {
	
	char ch;
	do {
		int choice;
		printf("1.Add Nodes\n2.Rotate Linked List\n3.Print Lineked list\n");

		printf("Enter your Choice : ");
		scanf("%d",&choice);

		switch(choice) {
			
			case 1 :
				int num;
				printf("Enter the no of Nodes : ");
				scanf("%d",&num);

				for(int i = 0; i < num; i++) {
					
					addNode();
				}
				break;

			case 2 :
				int rotateNum;
				printf("Rotate the said singly linked list to the right by places: ");
				scanf("%d",&rotateNum);

				rotateLinkedList(rotateNum);
				break;

			case 3 :
			        printSLL();
				break;
		  			       
		}
		printf("Do you want continue? : ");
		scanf("%d",&ch);
	} while(ch == 'Y' || ch = 'y');
}
