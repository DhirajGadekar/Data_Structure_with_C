//Singly Linked List Reverse 

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

int countNode(){
	
	int count = 0;
	node *temp = head;

	while(temp != NULL){
		count++;
		temp = temp->next;
	}

	return count;
}
void sllrevs(){
	
	if(head == NULL){
		printf("Linked List is Empty.\n");
	}else{

		node *temp1 = head;
		node *temp2 = head;

		while(temp2->next != NULL){
			temp2 = temp2->next;
		}
		int count = countNode();
		int cnt = count/2;
		
		while(cnt){
			int num = temp2->data;
			temp2->data = temp1->data;
			temp1->data = num;
	
			temp1 = temp1->next;
			cnt--;

		}
	}
}
int printSLL(){

	if(head == NULL){
		printf("Linked List is Empty.\n");
	}else{
		node *temp = head;
		while(temp->next != NULL){

			printf("|%d|->",temp->data);
			temp = temp->next;
		}
		printf("|%d|\n",temp->data);
	}
}

void main(){
	
	int node;
	printf("Enter the no of Nodes : ");
	scanf("%d",&node);

	for(int  i = 1;i <= node;i++){
		addNode();
	}
	printSLL();
	printSLL();
}
