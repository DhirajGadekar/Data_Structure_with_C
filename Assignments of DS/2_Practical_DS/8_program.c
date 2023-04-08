/*
 Program 8.
        Write a program that accepts a singly linear linked list from the user.
        Take a number from the user and only keep the elements that are equal in
        length to that number and delete other elements. And print the Linked list
        Length of Shashi = 6
        Input: linked list: |Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
        Input: 6
        Output : linked list: |Shashi |-> | Ashish|
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
        char str[20];
        struct node *next;
}node;

node *head = NULL;

node* createNode(){

        node *newNode = (node*)malloc(sizeof(node));

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
        }
}

int countNode(){
	
	node *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}
void deleteFirst(){
	int count = countNode();
	if(count == 0){
		printf("Node NOT FOUND, First Add the Node the DELETE it.\n");
	}else if(head->next == NULL){
		free(head);
		head = NULL;
	}else{
		node *temp = head;

		head = head->next;
		free(temp);
	}
}

void deleteLast(){

	int count = countNode();

	if(count == 0){
		printf("Node NOT FOUND, First Add the Node the DELETE it.\n");
	}else if(head->next == NULL){
		free(head);
		head = NULL;
	}else{
		node *temp = head;

		while(temp->next->next != NULL){
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

int deleteatpos(int pos){
	int count = countNode();

	if(pos <= 0 || pos > count){
		printf("Node Position is Wrong.\n");
		return -1;
	}else{
		if(pos == count){
			deleteLast();
		}else if(pos == 1){

			deleteFirst();
		}else{
			node *temp1 = head;
			node *temp2 = head;

			while(pos - 2){
				temp1 = temp1->next;
				temp2 = temp2->next;
				pos--;
			}
			temp2 = temp2->next;
			temp1->next = temp2->next;
			free(temp2);
		}
		return 0;
	}
}

void stringLen(int num){
	
	if(head == NULL){
		printf("Linked List is Empty.\n");
	}else{
		int pos = 0;
		node *temp = head;
		while(temp != NULL){
			pos++;
			if(num != strlen(temp->str)){
				deleteatpos(pos);
				pos--;
			}
			temp = temp->next;
		}
	}
}

void printSLL(){

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
        printf("\n");
}

void main(){

        int node,num;
        printf("Enter the no of Node : ");
        scanf("%d",&node);
        getchar();
        for(int i = 1;i<= node;i++){
                addNode();
        }
	printf("Before Deleted : ");
        printSLL();
	printf("Enter the Length : ");
	scanf("%d",&num);
        stringLen(num);
	printf("After Deleted : ");
        printSLL();

}
