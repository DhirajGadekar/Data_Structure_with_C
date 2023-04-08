/*
 7.Write a demo structure consisting of integer data,
   Take the number of nodes from the user & to check the prime numbef present in the data from the node.
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

void primeData(){

        demo *temp = head;
	
	printf("Prime numbers in node : ");
       	
	while(temp != NULL){
		int count = 0;
		for(int i = 1;i <= temp->data;i++){
			
			if((temp->data) % i == 0){
				count++;
			}
		}
		if(count == 2){
			
			printf("%d, ",temp->data);	
		}
		temp = temp->next;
	}
	printf("\n");

}

void main(){
        int node;
	printf("Enter the no of nodes : ");
	scanf("%d",&node);

	for(int i = 1;i <= node;i++){
		addNode();
	}
        primeData();
}

