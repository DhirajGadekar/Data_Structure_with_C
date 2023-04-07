#include<stdio.h>
#include<stdlib.h>

typedef struct student{

	int id;
	float ht;
	struct student *next;
}student;

void main(){

	student *head = NULL;
	
	//1st Node
	student *newNode = (student*)malloc(sizeof(student));
	newNode->id = 1;
	newNode->ht = 5.5;
	newNode->next = NULL;

	//Connecting 1st Node
	head = newNode;
	
	//2nd Node
	newNode = (student*)malloc(sizeof(student));
	newNode->id = 2;
	newNode->ht = 5.7;
	newNode->next = NULL;

	//Connecting 2nd Node
	head->next = newNode;

	//3rd Node
	newNode = (student*)malloc(sizeof(student));
	newNode->id = 3;
	newNode->ht = 6.00;
	newNode->next = NULL;

	//Connecting 3rd Node
	head->next->next = newNode;

	student *temp = head;

	while(temp != NULL){
		
		printf("%d ",temp->id);
		printf("%f ",temp->ht);

		temp = temp->next;
	}
	printf("\n");
}
