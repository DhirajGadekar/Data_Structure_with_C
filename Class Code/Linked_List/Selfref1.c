#include<stdio.h>
#include<string.h>

typedef struct Employee{
	
	char Emp_Name[20];
	int Emp_Id;
	float Emp_Sal;
	struct Employee *next;
}Emp;

void main(){

	Emp Obj1,Obj2,Obj3;

	Emp *head = &Obj1;

	strcpy((*head).Emp_Name,"Ganesh");
	(*head).Emp_Id = 1;
	(*head).Emp_Sal = 50.00;
	Obj1.next = &Obj2;

	strcpy(Obj1.next->Emp_Name,"Manish");
	Obj1.next->Emp_Id = 2;
	Obj1.next->Emp_Sal = 50.00;
	Obj2.next = &Obj3;

	strcpy(Obj2.next->Emp_Name,"Aditya");
	Obj2.next->Emp_Id = 3;
	Obj2.next->Emp_Sal = 50.00;
	Obj3.next = NULL;

	printf("%s\n",(*head).Emp_Name);
	printf("%d\n",(*head).Emp_Id);
	printf("%f\n",(*head).Emp_Sal);

	printf("%s\n",Obj1.next->Emp_Name);
	printf("%d\n",Obj1.next->Emp_Id);
	printf("%f\n",Obj1.next->Emp_Sal);
	
	printf("%s\n",Obj2.next->Emp_Name);
	printf("%d\n",Obj2.next->Emp_Id);
	printf("%f\n",Obj2.next->Emp_Sal);
}
