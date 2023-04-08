/*
 Program 7.
	Write a program that accepts a singly linear linked list from the user.
	Reverse the data elements from the linked list.
	Input: linked list: |Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
	Output : linked list |ihsahS|-> |hsihsA|->|ahnaK|->|luhaR|->|ehdaB|
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
        char str[20];
        struct node *next;
}node;

node *head = NULL;

node* createNode(){

        node *newNode = (node*)malloc(sizeof(node));

        char ch;
        int i = 0;
        printf("Enter the Name : ");
        while((ch = getchar()) != '\n'){
                (*newNode).str[i++] = ch;
        }
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

char* mystrrev(char *str){
	char x = 0;
	char *temp = str;

	while(*temp != '\0'){
		temp++;
	}
	temp--;

	while(str < temp){
		x = *str;
		*str = *temp;
		*temp = x;

		temp--;
		str++;
	}
	return str;
}

void stringrev(){

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

void printSLL(){

        if(head == NULL){
                printf("Linked List is Empty.\n");
        }else{

                node *temp = head;
                while(temp->next != NULL){
                        printf("|%s|->",temp->str);
                        temp = temp->next;
                }
                        printf("|%s|",temp->str);
        }
	printf("\n");
}

void main(){

        int node;
        printf("Enter the no of Node : ");
        scanf("%d",&node);
        getchar();
        for(int i = 1;i<= node;i++){
                addNode();
        }
	printf("\nBefore Reverce : ");
        printSLL();
	stringrev();
	printf("\nAfter Reverce : ");
	printSLL();
    
}

