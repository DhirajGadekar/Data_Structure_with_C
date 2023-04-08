/*
 6.Write a demo structure consisting of integer data,
   Take the number of nodes from the user & print the addition of first and last node from the data.
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

        int data;
        struct Demo *next;
}demo;

demo *head = NULL;

void addNode(){

        demo *newNode = (demo*)malloc(sizeof(demo));

        printf("Enter the data : ");
        scanf("%d",&newNode->data);

        newNode->next = NULL;

        if(head == NULL){
                head = newNode;
        }else{
                demo *temp = head;

                while(temp->next != NULL){
                        temp = temp->next;
                }
                temp->next = newNode;

        }
}

void addition(){

        demo *temp = head;
        int sum = 0;
        
	
        while(temp != NULL){
		if(head == temp){
			sum = sum + temp->data;
		}else if(temp->next == NULL){
			sum = sum + temp->data;
		}
		temp = temp->next;
        }
        
        printf("Addition of First and Last node data = %d\n",sum);

}

void main(){
        int node;
	printf("Enter the no of nodes : ");
	scanf("%d",&node);

	for(int i = 1;i <= node;i++){
		addNode();
	}
        addition();
}

