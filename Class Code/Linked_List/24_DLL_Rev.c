//Doubly Linked List Reverce Senario 2

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

int countNode(){
	
	node *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

int dllrev(){
	
	int count = countNode();
        if(head == NULL){
                printf("Linked List Empty.\n");
		return -1;
        }else{
                node *temp1 = head;
		node *temp2 = head;
                while(temp1->next != NULL){
                        temp1 = temp1->next;
                }
		
		int num = 0;
		for(int i = 1;i <= count/2;i++){
			num = temp1->data;
			temp1->data = temp2->data;
			temp2->data = num;

			temp2 = temp2->next;
			temp1 = temp1->prev;
		}
		return 0;
                
        }
}

int printDLL(){

        if(head == NULL){

                printf("Linked List is Empty.\n");
		return -1;
        }else{
                node *temp = head;
                while(temp->next != NULL){
                        printf("|%d|->",temp->data);
                        temp= temp->next;
                }
                printf("|%d|",temp->data);
                printf("\n");
		return 0;
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
	printDLL();

}
