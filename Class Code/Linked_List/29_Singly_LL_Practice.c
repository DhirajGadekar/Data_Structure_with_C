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
	
	node* newNode = createNode();

	if(head == NULL) {
		
		head = newNode;
	}else {
		
		node* temp = head;
		while(temp->next != NULL) {
			
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

int countNode() {

        int count = 0;
        node* temp = head;

        while(temp != NULL) {

                count++;
                temp = temp->next;
        }
        return count;
}
void addFirstNode() {
	
	node* newNode = createNode();

	if(head == NULL) {

		head = newNode;
	}else {

		newNode->next = head;
		head = newNode;
	}
}

void addLastNode() {
	
	addNode();
}

void addAtPos(int pos) {
	
	int count = countNode();
	
	if(pos <= 0 || pos >= count + 2) {
		
		printf("Wrong Choice");
	}else if(pos == 1) {
		
		addFirstNode();
	}else if(pos == count + 1) {

		addNode();
	}else {
		node* newNode = createNode();
		node* temp = head;
		while(pos - 2) {
			
			temp = temp->next;
			pos--;
		}
		newNode->next = temp->next;
		temp->next = newNode;		
	}
}

void deleteFirst() {
	
	if(head == NULL) {
		
		printf("Linked List is Empty\n");
	}else {
		
		node* temp = head;

		head = head->next;

		free(temp);
	}
}

void deleteLast() {
	
	if(head == NULL) {
		
		printf("Linked List is Empty");
	}else {
		
		node* temp = head;
		while(temp->next->next != NULL) {
			
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void deleteAtPos(int pos) {
	
	int count = countNode();

	if(pos <= 0 || pos >= count + 1) {
		
		printf("Wrong Position");
	}else if(pos == 1) {
		
		deleteFirst();
	}else if(pos == count) {
		
		deleteLast();
	}else{
		
		node* temp1 = head;
		node* temp2 = head;

		while(pos - 2) {
			
			temp1 = temp1->next;
			pos--;
		}

		temp2 = temp1->next;
		temp1->next = temp2->next;
		free(temp2);
	}

}
void printLL() {

	if(head == NULL) {

		printf("Linked List is Empty\n");
	}else {
		node *temp = head;
		while(temp != NULL) {
			
			
			printf("| %d |->",temp->data);
			
			temp = temp->next;
		}
		printf("\n");
	}	
}

void main() {
	
	char ch;
	do{
		int choice;
		printf("1.Add Node\n2.Add First node\n3.Add Last Node\n4.count Nodes\n5.Add Node At position\n6.Delete First Node\n7.Delete Last Node\n8.Delete At Positon\n9.Print Linked List\n");
		
		printf("\nEnter the choice : ");
		scanf("%d",&choice);

		switch(choice) {
			
			case 1 :
				addNode();
				break;
			case 2 :
				addFirstNode();
				break;
			case 3 :
				addLastNode();
				break;
			case 4 :
				int count = countNode();
				printf("Total Noded : %d\n",count);
				break;
			case 5 :
				int pos;
				printf("Enter the position : ");
				scanf("%d",&pos);
				addAtPos(pos);
				break;
			case 6 :
			        deleteFirst();
		       		break;
		 	case 7 :
				deleteLast();
				break;
			case 8 :
				int pos1;
				printf("Enter the position  : ");
				scanf("%d",&pos1);

				deleteAtPos(pos1);	
				break;
			case 9 :
				printLL();
				break;
			default :
				printf("Wrong Choice\n");
		}	
		getchar();
		printf("\ndo you want to continue : ");
		scanf("%c",&ch);
	}while(ch == 'Y' || ch == 'y');
}
