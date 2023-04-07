#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Movie{

	char mName[20];
	int count;
	float price;
	struct Movie *next;

}Movie;

void accessData(Movie *ptr){

	printf("%s\n",(*ptr).mName);
	printf("%d\n",(*ptr).count);
	printf("%f\n",(*ptr).price);
	printf("%p\n",(*ptr).next);

	printf("\n");

}
void main(){
	
	Movie *mptr1 = (Movie *)malloc(sizeof(Movie));
	Movie *mptr2 = (Movie *)malloc(sizeof(Movie));
	Movie *mptr3 = (Movie *)malloc(sizeof(Movie));

	Movie *head = mptr1;

	strcpy((*head).mName,"Kantara");
	(*head).count = 4;
	(*head).price = 1000.00;
	(*head).next = mptr2;

	strcpy((*mptr2).mName,"Tumbad");
	(*mptr2).count = 3;
	(*mptr2).price = 750.00;
	(*mptr2).next = mptr3;

	strcpy((*mptr3).mName,"ABCD");
	(*mptr3).count = 5;
	(*mptr3).price = 1250.00;
	(*mptr3).next = NULL;

	accessData(head);
	accessData(mptr2);
	accessData(mptr3);

}
