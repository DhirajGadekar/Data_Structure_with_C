/*
 1.Create Data
 2.AddData
 3.Print Data
 4.Count Node
 5.Add First
 6.Add at position
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct Employee{

	char eName[20];
	int id;
	struct Employee *next;
}Emp;

Emp *head = NULL;

Emp* createNode(){

	Emp *newNode = (Emp*)malloc(sizeof(Emp));
	
	getchar();
	printf("Enter the Employeee Name : ");

	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
		
		(*newNode).eName[i] = ch;
		i++;
	}

	printf("Enter the ID : ");
	scanf("%d",&newNode->id);

	newNode->next = NULL;

	return newNode;

}

void addNode(){
	
	Emp *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{

		Emp *temp = head;

		while(temp->next != NULL){
			
			temp = temp->next;

		}
		temp->next = newNode;
	}
}

void printLL(){
	
	Emp *temp = head;

	while(temp != NULL){
		
		printf("|%s ->",temp->eName);
		printf(" %d|",temp->id);
		temp = temp->next;
	}
	printf("\n");
}

void countNode(){
	int count = 0;
	Emp *temp = head;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	printf("Count = %d\n",count);
}

void addFirst(){

	Emp *newNode = createNode();
	
	if(head == NULL){
		
		head = newNode;
	}else{
		
		newNode->next = head;
		head = newNode;
	}
}

void addatpos(int pos){
	
	Emp *newNode = createNode();

	Emp *temp = head;
	
	while(pos){
		
		temp = temp->next;
		pos--;
	}
	newNode->next = temp->next;
	temp->next = newNode;

}
void main(){

	int node;
	printf("Enter the no of Node : ");
	scanf("%d",&node);

	for(int i = 1;i <= node;i++){
		
		addNode();
	}

	printLL();
	countNode();
	printf("Node add first position :\n");
	addFirst();
	printLL();

	int pos;
	printf("Enter the position of Node : ");
	scanf("%d",&pos);
	
	addatpos(pos);
	printLL();
}
