#include<stdio.h>
#include<stdlib.h>

typedef struct student{

        int id;
        float ht;
        struct student *next;
}stud;

stud* addNode(stud* head){

        stud *newNode = (stud*)malloc(sizeof(stud));
        newNode->id = 1;
        newNode->ht = 5.6;
        newNode->next = NULL;

        head = newNode;

	return head;

}

void printLL(stud* head){

        stud *temp = head;

        while(temp != NULL){

                printf("%d ",temp->id);
                printf("%f |",temp->ht);

                temp = temp->next;

        }
	printf("\n");

}

void main(){
	
	stud *head = NULL;
        head = addNode(head);
        printLL(head);

}

