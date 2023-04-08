/*
 Program 1. Write a program that searches all occurrences of a
	particular element from a singly linear linked list.
	Input linked list : |10|->|20|->|30|->|40|->|30|->|30|->|70|
	Input element: 30
	Output : 3
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int no;
	struct node *next;
}node;

node *head = NULL;

node* createNode(){
	
	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter the data : ");
	scanf("%d",&newNode->no);

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

int search_occur(int search){
	
         	node *temp = head;
		int count = 0;
		while(temp != NULL){

			if(temp->no == search){
				count++;	
			}
			temp = temp->next;
		}
		return count;
	
}

int printSLL(){
	
	if(head == NULL){
		printf("Linked List is Empty.\n");
		return -1;
	}else{
	
		node *temp = head;

		while(temp->next != NULL){
			printf("|%d|->",temp->no);
			temp = temp->next;
		}
		printf("|%d|\n",temp->no);

		return 0;
	}

}
void main(){
	
	while(1){
		int choice;
		printf("\n1.AddNode\n2.Search element occurance\n3.Print Linked List\n4.Exit\n");
		printf("\nEnter you Choice : ");
		scanf("%d",&choice);

		switch(choice){
				
			case 1:{
					int node;
					printf("Enter the No of Nodes : ");
					scanf("%d",&node);

					for(int i = 1;i <= node;i++){
						addNode();
					}
			       }
				break;
			case 2:
				{
					int search;
					if(head == NULL){
						printf("Linked List Empty\n");
					}else{
						printf("Enter the Number : ");
						scanf("%d",&search);
					
						int ret = search_occur(search);
						if(ret == 0){
							printf("%d is Not Occur in Linked list\n",search);
						}else{
							printf("Total Occurance Of the element of %d is : %d\n",search,ret);
						}
					}
				}
				break;
			case 3:
				printSLL();
				break;
			case 4 :
				exit(0);
				break;
			default:
				printf("Wrong Choice\n");

		}
	}
}
