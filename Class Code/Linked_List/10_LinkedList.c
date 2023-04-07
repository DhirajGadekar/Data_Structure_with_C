#include<stdio.h>
#include<stdlib.h>

struct Node{
	
	int Data;
	struct Node *next;
};

void main() {

	struct Node *head = NULL;
	
	//1st Node
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node)); 
	newNode->Data = 10;
	newNode->next = NULL;

	//Connecting 1st Node
	head = newNode;
	
	//2nd Node
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->Data = 20;
	newNode->next = NULL;

	//Connecting 2nd Node
	head->next = newNode;
	
	//3rd Node
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->Data = 30;
	newNode->next = NULL;

	//Connecting 3rd Node
	head->next->next = newNode;

	struct Node *Temp = head;

	while(Temp != NULL){
		
		if(Temp->next != NULL){

			printf("| %d |->",Temp->Data);
		}else{

			printf("| %d |\n",Temp->Data);

		}
		Temp = Temp->next;
	}

}
