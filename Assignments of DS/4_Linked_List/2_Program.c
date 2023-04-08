/*
Program 2. Write a program that accepts two singly linear linked
	lists from the user and concat source linked list after destination
	linked list.
	Input source linked list : |30|->|30|->|70|
	Input destination linked list : |10|->|20|->|30|->|40|
	Output destination linked list : |10|->|20|->|30|->|40|->|30|->|30|>|70|
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct node {

	int data;
	struct node *next;
}node;

node *head1 = NULL;
node *head2 = NULL;

node* createnode(){

	node *newnode = (node*)malloc(sizeof(node));
	
	printf("Enter data : ");
	scanf("%d",&newnode->data);
	
	newnode->next = NULL;
	
	return newnode;
}
void addnode(node **head){

	node *newnode = createnode();
	if(*head==NULL){

		*head = newnode;
	}else{

		node *temp = *head;
		while(temp->next!=NULL){

			temp = temp->next;
		}
		temp->next = newnode;
	}
}

int concat(){
	
	if(head1 == NULL && head2 == NULL){
		printf("Source or Destination Linked List is Empty\n");
		return -1;
	}else{
		node *temp = head2;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = head1;
		return 0;
	}
}
void printll(node **head){
	if(*head == NULL){
		printf("Linked List is Empty \n");
	}else{
		node *temp = *head;
		while(temp->next!=NULL){

			printf("|%d|->",temp->data);
			temp = temp->next;
		}
		printf("|%d|\n",temp->data);
	}
}
void main(){

	printf("<---------------------START MAIN-------------------->\n");
	while(1){
		int choice;
		printf("\n1.Add Data In Source Linked List\n");
		printf("2.Add Data In Destination Linked List\n");
		printf("3.Print Data In Source Linked List\n");
		printf("4.Print Data In Destination Linked List\n");
		printf("5.Concat Source And Destination Linked List\n");
		printf("6.Exit\n");

		printf("\nEnter Your Choice : ");
		scanf("%d",&choice);

		switch(choice){
			case 1:{
				int num1;
				printf("Enter the no of Nodes for sources : ");
				scanf("%d",&num1);
				for(int i = 1;i <= num1;i++){
					addnode(&head1);
				}
			       }
				break;
			case 2:{
			        int num2;
				printf("Enter the no of Nodes for destination : ");
				scanf("%d",&num2);
				for(int i = 1;i <= num2;i++){
					addnode(&head2);
				}
			       }
				break;
			case 3:
				printll(&head1);
				break;
			case 4:
				printll(&head2);
				break;
			case 5:
				concat();
				break;
			case 6:
				printf("<---------------------END MAIN-------------------->\n");
				exit(0);
			default:
				printf("Wrong Choice !\n");
		 
		}

	}
}
