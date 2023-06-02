
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	
	struct node* prev;
	int data;
	struct node* next;
}node;

node* head = NULL;

node* createNode() {
	
	node* newNode = (node*)malloc(sizeof(node));

	newNode->prev = NULL;

	printf("Enter the Data :");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode() {
	
	node* newNode = createNode();

	if(head == NULL) {
		
		head = newNode;
	}else {

		node* temp = head;

		while(temp->next != NULL) {
			
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
}
int countNode() {
	
	int count = 0;
	if(head == NULL) {
		
		printf("Linked List is Empty\n");
	}else {

		node *temp = head;
		while(temp != NULL) {
			
			count++;
			temp = temp->next;
		}
	}
	return count;
}

void addFirstNode() {
	
	node* newNode = createNode();
	if(head == NULL) {
		
		head = newNode;
	}else {
		
		head->prev = newNode;
		newNode->next = head;
		head = newNode;
	}
}

void addLastNode() {
	
	addNode();
}

void addAtPosition(int pos) {

	int count = countNode();
	
	if(pos <= 0 || pos >= count + 2) {
		
		printf("Wrong Position\n");
	}else if(pos == 1) {
		
		addFirstNode();
	}else if(pos == count + 1) {
		
		addLastNode();
	}else {
		node* newNode = createNode();
		node* temp = head;

		while(pos - 2) {
			
			temp = temp->next;
			pos--;
		}

		temp->next->prev = newNode;
		newNode->next = temp->next;
		newNode->prev = temp;
		temp->next = newNode;
	}
}	

void deleteFirstNode() {
	
	if(head == NULL) {
		
		printf("Linked List Empty.\n");
	}else if(head->next == NULL) {
		
		free(head);
		head = NULL;
	}else {
		
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}
}

void deleteLastNode() {
	
	if(head == NULL) {
		
		printf("Linked List is Empty\n");
	}else if(head->next == NULL) {

		free(head);
		head = NULL;
	}else {
		
		node* temp = head;
		while(temp->next->next != NULL) {
			
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void deleteAtPosition(int pos) {
	
	int count  = countNode();

	if(pos <= 0 || pos >= count + 1) {

		printf("Wrong Position\n");
	}else if(pos == 1) {
		
		deleteFirstNode();
	}else if(pos == count) {

		deleteLastNode();
	}else {
		node* temp = head;
		while(pos - 2) {

			temp = temp->next;
			pos--;
		}
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;

	}
}

void printDLL() {
	
	if(head == NULL) {
		
		printf("Linked List is Empty\n");
	}else {

		node* temp = head;
		while(temp != NULL) {
			
			printf("| %d |->" , temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}

void main() {
	
	char ch;
	do{
		int choice;
		printf("1.Add Node\n2.Print Nodes\n3.count Nodes\n4.Add First Node\n5.Add Last Node\n6.Add At Position\n7.Delete First Node\n8.Delete Last Node\n9.Delete Node At Position\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice) {
			
			case 1 :
				{
					int node;
					printf("Enter the No of Nodes :");
					scanf("%d",&node);

					for(int i = 1;i <= node; i++) {
						
						addNode();
					}
				}
				break;
			case 2 :
				printDLL();
				break;
			case 3 :
				int count = countNode();
				printf("Total Nodes = %d\n",count);
				break;
			case 4 :
				addFirstNode();
				break;
			case 5 :
				addLastNode();
				break;
			case 6 :
				int pos1;
				printf("Enter the position : ");
				scanf("%d",&pos1);
				addAtPosition(pos1);
				break;
			case 7 :
				deleteFirstNode();
				break;
			case 8 :
				deleteLastNode();
				break;
			case 9 :
				int pos2;
				printf("Enter the position : ");
				scanf("%d",&pos2);
				deleteAtPosition(pos2);
				break;
			default :
				printf("Wrong Choice");

		}
		getchar();
		printf("\nDo you want continue ? :\n");
		scanf("%c",&ch);

	}while(ch == 'Y' || ch == 'y');
}
