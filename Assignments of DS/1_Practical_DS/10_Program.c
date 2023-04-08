/*
 10.Write a real rtime example for a linked list and print its data atke 5 nodes from the user.
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct musicPlayer{
	
	char sName[20];
	int num;
	float time;
	struct musicPlayer *next;
}Mplay;

Mplay *head = NULL;

Mplay* createNode(){

	Mplay *newNode = (Mplay*)malloc(sizeof(Mplay));

	getchar();

	printf("Enter the Name of Song : ");

	char ch;

	for(int i = 0; (ch = getchar()) != '\n';i++){
		
		(*newNode).sName[i] = ch;

	}

	printf("Enter the no of song : ");
	scanf("%d",&newNode->num);

	printf("Enter the timing of song : ");
	scanf("%f",&newNode->time);

	newNode->next = NULL;
}

void addNode(){

	Mplay *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
	
		Mplay *temp = head;

		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printLL(){
	Mplay *temp = head;

	while(temp != NULL){
		
		printf("|%s -> ",temp->sName);
		printf("%d ->",temp->num);
		printf("%0.2f |",temp->time);
		temp = temp->next;
	}
	printf("\n");
}


void main(){
	
	int node;
	printf("How many nodes you have : ");
	scanf("%d",&node);

	for(int i = 1;i <= node;i++){
		
		addNode();

	}
	printLL();
}

