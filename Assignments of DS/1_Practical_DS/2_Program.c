/* 
 2.WAP for the Linked List of States in india consisting of its name,Population,Budget & Literacy,
 Connect 3 states in LinkedList & Print their data 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct States{

        char sName[20];
        long int pop;
        float Budget;
	int lit;
        struct States *next;
}state;

state *head = NULL;

void addData(){

        state* newNode = (state *)malloc(sizeof(state));

        printf("Enter the Name of State : ");
        fgets(newNode->sName,20,stdin);

        printf("Enter the population : ");
        scanf("%ld",&newNode->pop);

        printf("Enter the Budget : ");
        scanf("%f",&newNode->Budget);

	printf("Enter the Literacy : ");
	scanf("%d",&newNode->lit);

        getchar();

        newNode->next = NULL;

        if(head == NULL){
                head = newNode;
        }else{
                state *temp = head;

                while(temp->next != NULL){

                        temp = temp->next;

                }
                temp->next = newNode;
        }
}

void printLL(){

        state *temp = head;

        while(temp != NULL){
                temp->sName[strlen(temp->sName) - 1] = '\0';
                printf("|%s -> ",temp->sName);
                printf("%ld -> ",temp->pop);
                printf("%f ->",temp->Budget);
		printf("%d |",temp->lit);

                temp = temp->next;
        }
        printf("\n");
}

void main(){

        addData();
        addData();
        addData();
        printLL();
}

