/*
 Program 3.
	Write a program that searches the occurrence of a particular element from
	a singly linear linked list.
	Input linked list: |10|->|20|->|30|->|40|->|50|->|30|->|70|
	Input Enter element: 30
	Output: 2 times
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

int tOccur(int num){

        if(head == NULL){
                printf("Linked List is Empty.\n");
        }else{
                int time = 0,flag = 0;
                node *temp = head;
                while(temp != NULL){

                        if(temp->data == num){
                                flag = 1;
                                time++;
                        }
                        temp = temp->next;
                }
          	if(flag == 1){
                        
			printf("%d element FOUND %d Times.\n",num,time);
                }else{
                        
			printf("%d is NOT FOUND in Linked List.\n",num);
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
        printf("Enter the Element : ");
        scanf("%d",&num);
        tOccur(num);
}

