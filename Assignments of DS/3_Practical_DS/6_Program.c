/*
 Program 6.
	Write a program that accepts a doubly linear linked list from the user.
	Take a number from the user and print the data of the length of that
	number. Length of kanha=5
	Input: linked list: |Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
	Input: Enter number 5
	Output:
	Kanha
	Rahul
	Badhe
 */

/*
Program 6.
	Write a program that accepts a singly linear linked list from the user.
	Take a number from the user and print the data of the length of that
	number. Length of kanha=5
	Input: linked list: |Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
	Input: Enter number 5
	Output:
		Kanha
		Rahul
		Badhe
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	struct node *prev;
	char str[20];
	struct node *next;
}node;

node *head = NULL;

node* createNode(){

	node *newNode = (node*)malloc(sizeof(node));
	
	newNode->prev = NULL;
	char ch;
	int i = 0;
	printf("Enter the Name : ");
	while((ch = getchar()) != '\n'){
		(*newNode).str[i++] = ch;
	}
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
		newNode->prev = temp;
	}
}

int mystrlen(char *str){
	int count = 0;
	while(*str != '\0'){
		count++;
		str++;
	}
	return count;
}
void length(int num){

	if(head == NULL){
		printf("Linked List is Empty.\n");
	}else{
		node *temp = head;
		int flag = 0;
		while(temp != NULL){

			int len = mystrlen(temp->str);
			if(num == len){
				flag = 1;
				printf("%s\n",temp->str);
			}
			temp = temp->next;
		}
		if(flag == 0){
			printf("%d length String NOT FOUND in Linked List.\n",num);
		}
	}
}

void printDLL(){

	if(head == NULL){
		printf("Linked List is Empty.\n");
	}else{

		node *temp = head;
		while(temp->next != NULL){
			printf("|%s|->",temp->str);
			temp = temp->next;
		}
			printf("|%s|",temp->str);
	}
}

void main(){

	int node,num;
	printf("Enter the no of Node : ");
	scanf("%d",&node);
	getchar();
	for(int i = 1;i<= node;i++){
		addNode();
	}
	printDLL();
	printf("\nEnter the length of String : ");
	scanf("%d",&num);
	length(num);
}
