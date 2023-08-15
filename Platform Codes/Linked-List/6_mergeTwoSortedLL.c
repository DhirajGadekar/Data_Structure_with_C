/*
 Program 6 : Write a C program to merge two sorted singly linked lists into a single sorted linked list.

 	Test Data and Expected Output :

	Two sorted singly linked lists:
		1 3 5 7 
		2 4 6 

	After merging the said two sorted lists:
		1 2 3 4 5 6 7 
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct node {

	int data;
	struct node *next;
}node;

node* createNode() {
	
	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter the data : ");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(node **head) {
	
	node *newNode = createNode();

	if(*head == NULL) {
			
		*head = newNode;
	} else {
		
		node *temp = *head;

		while(temp->next != NULL) {
			
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
node* mergeTwoLinkedList(node *head1, node *head2) {

	node *head = NULL;
	if(head1 == NULL && head2 == NULL) {
		
		printf("Linked List is Empty\n");
	} else {
		
		while(head1 != NULL && head2 != NULL) {
			
			if(head1->data > head2->data ) {

				if(head == NULL) {
					
					head = head2;
					head2 = head->next;
					head->next = NULL;
				} else {
					
					node *temp = head;
					while(temp->next != NULL) {
						
						temp = temp->next;
					}
					temp->next = head2;
					head2 = head2->next;
					temp->next->next = NULL;
				}
			} else {

				if(head == NULL) {
					
					head = head1;
					head1 = head1->next;
					head->next = NULL;
				} else {
					
					node *temp = head;
					while(temp->next != NULL) {
						
						temp = temp->next;
					}
					temp->next = head1;
					head1 = head1->next;
					temp->next->next = NULL;
				}
			}
		}
		if(head1 == NULL) {

			node *temp = head;
			while(temp->next != NULL) {
				
				temp = temp->next;
			}
			temp->next = head2;
			head2 = NULL;
		} else if(head2 == NULL){
			
			node *temp = head;
			while(temp->next != NULL) {
				
				temp = temp->next;
			}
			temp->next = head1;
			head1 = NULL;
		}
	}
	return head;
}
void printSLL(node *head) {
	
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
	
	node *head1 = NULL;
	node *head2 = NULL;
	
	char ch;
	do {

		int choice;
		printf("1.Add Node in Linked List\n2.Merge Two Sorted Linked List\n3.Print Linked List\n");
		printf("\nEnter your Choice : ");
		scanf("%d",&choice);

		switch(choice) {
			
			case 1 :{
					int num;
					printf("Input the number of node for First Linked List: ");
					scanf("%d",&num);
					for(int i = 0; i < num; i++) {
						
						addNode(&head1);
					}

					printf("Input the number of node for Second Linked List: ");
					scanf("%d",&num);
					for(int i = 0; i < num; i++) {
						
						addNode(&head2);
					}
				}
				break;

			case 2 :
				node *head = mergeTwoLinkedList(head1,head2);
				printSLL(head);
				head1 = NULL;
				head2 = NULL;
				break;

			case 3 :{
					printf("Print First Linked List\n");
					printSLL(head1);
					
					printf("Print Second Linked List\n");
					printSLL(head2);
				}
				break;
		}

		getchar();
		printf("Do you want to continue?");
		scanf("%c",&ch);
	} while(ch == 'Y' || ch == 'y');
}


