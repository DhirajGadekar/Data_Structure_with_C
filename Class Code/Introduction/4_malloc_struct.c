#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct OOT{
	char pName[20];
	int users;
	float sPrice;
};
void main(){

	struct OOT *ptr1 = (struct OOT *)malloc(sizeof(struct OOT));
	struct OOT *ptr2 = (struct OOT *)malloc(sizeof(struct OOT));

	strcpy((*ptr1).pName,"Amezon Prime");
	(*ptr1).users = 10000;
	(*ptr1).sPrice = 699.00;

	strcpy((*ptr2).pName,"Netflix");
	(*ptr2).users = 9000;
	(*ptr2).sPrice = 599.00;

	printf("%s\n",(*ptr1).pName);
	printf("%d\n",(*ptr1).users);
	printf("%f\n",(*ptr1).sPrice);
	
	printf("%s\n",(*ptr2).pName);
	printf("%d\n",(*ptr2).users);
	printf("%f\n",(*ptr2).sPrice);
}
