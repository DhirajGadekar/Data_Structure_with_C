#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Movie{

        char mName[20];
        float imdb;
        struct Movie *next;
}Movie;

Movie *head = NULL;

void addData(){

        Movie *newNode = (Movie*)malloc(sizeof(Movie));

        printf("Enter the String : ");
        fgets(newNode->mName,20,stdin);

        printf("Enter the rating : ");
        scanf("%f",&newNode->imdb);

        getchar();

        newNode->next = NULL;

        if(head == NULL){

                head = newNode;

        }else{

                Movie *temp = head;

                while(temp->next != NULL){

                        temp = temp->next;
                }
                temp->next = newNode;

        }
}

void printLL(){

        Movie *temp = head;

        while(temp != NULL){
                printf("| ");
                for(int  i = 0;temp->mName[i] != '\n';i++){

                        printf("%c",temp->mName[i]);
                }
                printf(" -> %.2f |",temp->imdb);
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

