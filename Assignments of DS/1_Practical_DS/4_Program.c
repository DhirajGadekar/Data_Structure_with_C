/*
 3.WAP for the Linked List of Festicals in India.
   Take input from the user int he Linked List & print its data.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Festivals{

        char fName[20];
        int day,month,year;
        struct Festivals *next;
}Fest;

Fest *head = NULL;

void addData(){

        Fest *newNode = (Fest*)malloc(sizeof(Fest));
        printf("Enter the Name of Festival : ");
        fgets(newNode->fName,20,stdin);

        printf("Day : ");
        scanf("%d",&newNode->day);

        printf("Month : ");
        scanf("%d",&newNode->month);

        printf("Year : ");
        scanf("%d",&newNode->year);

        getchar();

        newNode->next = NULL;

        if(head == NULL){
                head = newNode;
        }else{
                Fest *temp = head;

                while(temp->next != NULL){

                        temp = temp->next;

                }
                temp->next = newNode;
        }
}

void countNode(){

        Fest *temp = head;
	int count = 0;
        while(temp != NULL){
                count++;
		temp = temp->next;
        }
        printf("Total Nodes in Linked List : %d",count);
	printf("\n");
}

void main(){

        addData();
        addData();
        countNode();

}

