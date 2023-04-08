/*
 Program 2.
	Write a program that searches for the second last occurrence of a
	particular element from a doubly linear linked list.
	Input linked list: |10|->|20|->|30|->|40|->|30|->|30|->|70|
	Input Enter element: 30
	Output: 5
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
        struct node *prev;
	int data;
        struct node *next;
}node;

node *head = NULL;

node* createNode(){

        node *newNode = (node*)malloc(sizeof(node));
	
	newNode->prev = NULL;
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
		newNode->prev = temp;
        }
}

int sOccur(int num){

	if(head == NULL){
		printf("Linked List is Empty.\n");
	}else{
		int second = 0,first = 0,count = 0,flag = 0,n = 0;
		node *temp = head;
		while(temp != NULL){

			count++;
			if(temp->data == num){
				flag = 1;
				second = first;
				first = count;
				n++;
			}
			temp = temp->next;
		}
		if(n == 1){
			printf("%d is FOUND in Linked List single time\n",num);
			return -1;
		}else{
			if(flag == 1){
				printf("%d element second Occurence position is %d.\n",num,second);
			}else{
				printf("%d is NOT FOUND in Linked List.\n",num);
			}

		}

	}
}

void main(){

	int node,num;
	printf("Enter the no of Node : ");
	scanf("%d",&node);

	for(int i = 1;i <= node;i++){
		addNode();
	}
	printf("Enter the Element : ");
	scanf("%d",&num);
	sOccur(num);
}
