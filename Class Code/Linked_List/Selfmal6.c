#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee{

	char empName[20];
	int empID;
	float Sal;
	struct employee *next;
}Emp;
void main(){

	Emp *emp1 = (Emp *)malloc(sizeof(Emp));
	Emp *emp2 = (Emp *)malloc(sizeof(Emp));
	Emp *emp3 = (Emp *)malloc(sizeof(Emp));

	strcpy((*emp1).empName,"Aditya");
	(*emp1).empID = 1;
	(*emp1).Sal = 50.00;
	(*emp1).next = emp2;

	
	strcpy((*emp2).empName,"Ajinkya");
	(*emp2).empID = 2;
	(*emp2).Sal = 50.00;
	(*emp2).next = emp3;

	strcpy((*emp3).empName,"Manish");
	(*emp3).empID = 3;
	(*emp3).Sal = 50.00;
	(*emp3).next = NULL;

	printf("%s\n",(*emp1).empName);
	printf("%d\n",(*emp1).empID);
	printf("%f\n",(*emp1).Sal);
	printf("%p\n",(*emp1).next);

	printf("\n");

	printf("%s\n",(*emp2).empName);
	printf("%d\n",(*emp2).empID);
	printf("%f\n",(*emp2).Sal);
	printf("%p\n",(*emp2).next);

	printf("\n");

	printf("%s\n",(*emp3).empName);
	printf("%d\n",(*emp3).empID);
	printf("%f\n",(*emp3).Sal);
	printf("%p\n",(*emp3).next);
}
