#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Company{
	char cName[20];
	int Emp_count;
	float rev;
};
void main(){

	struct Company *ptr1 = (struct Company *)malloc(sizeof(struct Company));
	struct Company *ptr2 = (struct Company *)malloc(sizeof(struct Company));

	strcpy((*ptr1).cName,"Nvidia");
	(*ptr1).Emp_count = 10000;
	(*ptr1).rev = 8000.00;

	strcpy((*ptr2).cName,"Netflix");
	(*ptr2).Emp_count = 9000;
	(*ptr2).rev = 5299.00;

	printf("%s\n",(*ptr1).cName);
	printf("%d\n",(*ptr1).Emp_count);
	printf("%f\n",(*ptr1).rev);
	
	printf("%s\n",(*ptr2).cName);
	printf("%d\n",(*ptr2).Emp_count);
	printf("%f\n",(*ptr2).rev);
}
