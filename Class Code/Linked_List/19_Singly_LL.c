//Find second occurance data in linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{
	
	int data;
	struct Demo *next;
}demo;

demo *head = NULL;

demo* createNode(){

	demo *newNode = (demo*)malloc(sizeof(demo));
	getchar();
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

void dataoccur(int num,int node){

	demo *temp = head;
	int time = 0,flag = 0,pos = 0,arr[node],p = 0;
	while(temp != NULL){
		pos++;
		if(temp->data == num){

			time++;
			flag = 1;
			arr[p++] = pos;
		}
		temp = temp->next;
	}
	if(time == 1){
			printf("%d is PRESENT in Linked List only %d times.\n",num,time);
        }else{
		if(flag == 1){
			printf("%d is PRESENT in Linked List %d times.\n",num,time);
			printf("%d secound occurence at position : %d\n",num,arr[p - 2]);
		}else{
			printf("%d is NOT FOUND in Linked List.\n",num);
		}	
	}
	
}

void main(){

	int node,num;
	printf("How many nodes you want : ");
	scanf("%d",&node);

	for(int i = 1;i <= node;i++){

		addNode();
	}

	printf("Which number you want : ");
	scanf("%d",&num);

	dataoccur(num,node);


}
