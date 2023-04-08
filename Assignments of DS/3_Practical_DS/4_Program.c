/*
 Program 4.
	Write a program that adds the digits of a data element from a singly linear
	linked list and changes the data. (sum of data element digits)
	Input linked list : |11|->|12|->|13|->|141|->|2|->|158|
	Output linked list : |2|->|3|->|4|->|6|->|2|->|14|
 */


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

void changeData(){

        if(head == NULL){
                printf("Linked List is Empty.\n");
        }else{

                node *temp = head;
                while(temp != NULL){
			int sum = 0,rem = 0,num = 0;
			num = temp->data;
			while(num != 0){

				rem = num % 10;
				sum = sum + rem;
				num = num / 10;
			}
			temp->data = sum;
			temp = temp->next;
                }

        }
}

int printDLL(){

	if(head == NULL){
		printf("Linked List is Empty\n");
		return -1;
	}
	node *temp = head;
	while(temp->next != NULL){
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}
void main(){

        int node,num;
        printf("Enter the no of Node : ");
        scanf("%d",&node);

        for(int i = 1;i <= node;i++){
                addNode();
        }
	printf("\nBefore Addition : ");
        printDLL();
	changeData();
	printf("\nAfter the Addition : ");
	printDLL();

}

