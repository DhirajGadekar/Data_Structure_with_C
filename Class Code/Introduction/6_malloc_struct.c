#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Movie{
	char mName[20];
	int count;
	float Price;
};
void main(){

	struct Movie *ptr1 = (struct Movie *)malloc(sizeof(struct Movie));
	struct Movie *ptr2 = (struct Movie *)malloc(sizeof(struct Movie));

	strcpy((*ptr1).mName,"Kantara");
	(*ptr1).count = 5;
	(*ptr1).Price = 1250.00;

	strcpy((*ptr2).mName,"KGF");
	(*ptr2).count = 4;
	(*ptr2).Price = 1500.00;

	printf("%s\n",(*ptr1).mName);
	printf("%d\n",(*ptr1).count);
	printf("%f\n",(*ptr1).Price);
	
	printf("%s\n",(*ptr2).mName);
	printf("%d\n",(*ptr2).count);
	printf("%f\n",(*ptr2).Price);
}
