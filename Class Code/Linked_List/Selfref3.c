#include<stdio.h>
#include<string.h>

typedef struct Company{
	
	char cName[20];
	int Emp_count;
	float rev;
	struct Company *next;
}Company;

void main(){

	Company obj1,obj2,obj3;

	Company *head = &obj1;

	strcpy((*head).cName,"Nvidia");
	(*head).Emp_count = 10000;
	(*head).rev = 599.00;
	head->next = &obj2;

	strcpy(head->next->cName,"Adobe");
	head->next->Emp_count = 12000;
	head->next->rev = 990.00;
	head->next->next = &obj3;

	strcpy(head->next->next->cName,"TCS");
	head->next->next->Emp_count = 13000;
	head->next->next->rev = 490.00;
	head->next->next->next = NULL;

	printf("%s\n",(*head).cName);
	printf("%d\n",(*head).Emp_count);
	printf("%f\n",(*head).rev);

	printf("%s\n",head->next->cName);
	printf("%d\n",head->next->Emp_count);
	printf("%f\n",head->next->rev);
	
	printf("%s\n",head->next->next->cName);
	printf("%d\n",head->next->next->Emp_count);
	printf("%f\n",head->next->next->rev);
}
