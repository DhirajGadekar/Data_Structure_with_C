/*
 Program 8.
	Write a program that accepts a doubly linear linked list from the user.
	Take a number from the user and only keep the elements that are equal in
	length to that number and delete other elements. And print the Linked list
	Length of Shashi = 6
	Input: linked list: |Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
	Input: 6
	Output : linked list: |Shashi |-> | Ashish|
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
        printf("Enter the Name : ");
        char ch;
        int i = 0;
        while((ch = getchar()) != '\n'){
                (*newNode).str[i++] = ch;
        }
        newNode->next =NULL;
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
                newNode->prev = temp;
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
	if(head == NULL){
		
		printf("Linked List is Empty\n");
	}else if(head->next == NULL){
		
		free(head);
		head = NULL;
	}else{
		
		head = head->next;
		free(head->prev);
	}
}

void deleteLast(){
	
	if(head == NULL){

                printf("Linked List is Empty\n");
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
		printf("Wrong position.\n");
		return -1;
	}else{
		if(pos == 1){
			deleteFirst();
		}else if(pos == count){
			deleteLast();
		}else{
			node *temp = head;
			while(pos - 2){
				
				temp = temp->next;
				pos--;
			}
			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
		}
	}
}

int mystrlen(char *str){
        int len = 0 ;
        while(*str != '\0'){

                str++;
                len++;
        }
        return len;

}

void dellength(int num){
	
	if(head == NULL){
		printf("Linked List is Empty.\n");
	}else{
		node *temp = head;
		int pos = 0,len = 0,flag = 0;
		while(temp != NULL){
			pos++;

			if(num != (len = mystrlen(temp->str))){
				flag = 1;
				deleteatpos(pos);
				pos--;
			}
			temp = temp->next;
		}
		if(flag == 0){
			printf("%d length string NOT FOUND in Linked List.\n",num);
		}
	}
}

void printDLL(){

        node *temp = head;

        if(head == NULL){
                printf("Linked List is Empty.\n");
        }else{
                while(temp->next != NULL){

                        printf("|%s|->",temp->str);
                        temp = temp->next;
                }
                printf("|%s|\n",temp->str);
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
	printf("Enter the Length : ");
	scanf("%d",&num);
        dellength(num);
        printDLL();

}
