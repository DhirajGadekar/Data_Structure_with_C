/*
 1.Create Node
 2.Add Node
 3.Add First Node
 4.Add Last Node
 5.Add At Position
 6.Count Node
 7.Delete First Node
 8.Delete Last Node
 9.Delete at Position
 10.printLL
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{
	int data;
	struct Demo *next;
}demo;

demo *head = NULL;

demo* createNode(){
	
	demo *newNode = (demo*)malloc(sizeof(demo));

	printf("Enter the Data : ");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){

	demo *newNode = createNode();

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

void addFirstNode(){
	
	demo *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}
}

void addLastNode(){
	
	addNode();
}

int countNode(){
	demo *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}
void addatpos(int pos){
	
	demo *temp = head;
	
	int count = countNode();
	
	if(pos == 1){	
		addFirstNode();
	}else if(pos > count || pos < 1){
		
		printf("Invalid Postion.\n");
	
	}else if(pos == count){
	        demo *newNode = createNode();
		while(pos - 2){
		
			temp = temp->next;
			pos--;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}else{
	        demo *newNode = createNode();
		while(pos - 2){
			temp = temp->next;
			pos--;
		}
		newNode->next = temp->next;
		temp->next = newNode;
		
	}
}

void deleteFirst(){

	demo *temp = head;
	
	head = head->next;

	free(temp);

}

void deleteLast(){

	demo *temp = head;

	while(temp->next->next != NULL){
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}

void printLL(){
	demo *temp = head;
	
	while(temp != NULL){
		if(temp->next != NULL){

			printf("|%d|->",temp->data);
		       
		}else{

			printf("|%d|",temp->data);
		}
		temp = temp->next;
	}
	printf("\n");

}

void main(){
	
	char choice;

	do{
		printf("1.AddNode\n2.AddFirstNOde\n3.AddLastNode\n4.AddAtPos\n5.countNode\n6.DeleteFirstNode\n7.DeleteLastNode\n8.DeleteAtPos\n9.printLL\n");
		int num;
		printf("Enter you Choice : ");
		scanf("%d",&num);

		switch(num){
			case 1:
				{
					int node;
					printf("Enter the no of NOdes : ");
					scanf("%d",&node);

					for(int i = 1;i <= node;i++){
						addNode();
					}
				}
				break;
			case 2:
				addFirstNode();
				break;
			case 3:
				addLastNode();
				break;
			case 4:
				{
					int pos;
					printf("Enter the position : ");
					scanf("%d",&pos);

					addatpos(pos);
				}
				break;
			case 5:
				int count = countNode();
				printf("Total Nodes in Linked List : %d\n",count);
				break;
			case 6:
				deleteFirst();
				break;
			case 7:
				deleteLast();
				break;
			case 8:
				printf("sorry\n");
				break;
			case 9:
				printLL();
				break;
			default :
				printf("Wrong Choice !!\n");
		}
		getchar();
		printf("When you want continue code then type [Y/y] otherwise type [N/n] : ");
		scanf(" %c",&choice);
	}while(choice == 'Y' || choice == 'y');
}
