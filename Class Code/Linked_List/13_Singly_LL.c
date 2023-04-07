#include<stdio.h>
#include<stdlib.h>

typedef struct student{

	int id;
	float ht;
	struct student *next;
}stud;

stud *head = NULL;

void addNode(){
	
	stud *newNode = (stud*)malloc(sizeof(stud));
	newNode->id = 1;
	newNode->ht = 5.6;
	newNode->next = NULL;
	
	head = newNode;

}

void printLL(){
	
	stud *temp = head;

	while(temp != NULL){
		
		printf("%d ",temp->id);
		printf("%f |",temp->ht);

		temp = temp->next;

	}

}

void main(){
	
	addNode();
	printLL();

}
