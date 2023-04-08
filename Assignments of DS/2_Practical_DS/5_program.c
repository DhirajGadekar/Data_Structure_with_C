/*
 Program 5.
	Write a program that searches all the Palindrome data elements from a
	singly linear linked list. And Print the position of palindrome data
	Input: linked list: |12|->|121|->|30|->|252|->|35|->|151|->|70|
	Output:
	Palindrome found at 2
	Palindrome found at 4
	Palindrome found at 6
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
        }
}

void palindromeData(){

        if(head == NULL){
                printf("Linked List is Empty.\n");
        }else{

                node *temp = head;
		int pos = 0;
                while(temp != NULL){
                        int sum = 0,rem = 0,num = 0,pal = 0;
                        num = temp->data;
                        while(num != 0){

                                rem = num % 10;
                                pal = (pal * 10) + rem;
                                num = num / 10;
                        }
			if(temp->data == pal){
				pos++;
				printf("Palindrome Found at %d.\n",pos);
			}else{
				pos++;
			}
                        temp = temp->next;
                }

        }
}

void main(){

        int node,num;
        printf("Enter the no of Node : ");
        scanf("%d",&node);

        for(int i = 1;i <= node;i++){
                addNode();
        }
        
        palindromeData();
}

