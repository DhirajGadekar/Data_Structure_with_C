#include<stdio.h>
#include<string.h>

typedef struct Batsman{
	
	char pName[20];
	int Jer_No;
	float Avg;
	struct Batsman *next;
}Batsman;

void main(){

	Batsman obj1,obj2,obj3;

	Batsman *head = &obj1;

	strcpy((*head).pName,"Rohit Sharma");
	(*head).Jer_No = 45;
	(*head).Avg = 45.00;
	head->next = &obj2;

	strcpy(head->next->pName,"Virat Kohli");
	head->next->Jer_No = 18;
	head->next->Avg = 52.00;
	head->next->next = &obj3;

	strcpy(head->next->next->pName,"KL Rahul");
	head->next->next->Jer_No = 1;
	head->next->next->Avg = 39.00;
	head->next->next->next = NULL;

	printf("%s\n",(*head).pName);
	printf("%d\n",(*head).Jer_No);
	printf("%f\n",(*head).Avg);

	printf("%s\n",head->next->pName);
	printf("%d\n",head->next->Jer_No);
	printf("%f\n",head->next->Avg);
	
	printf("%s\n",head->next->next->pName);
	printf("%d\n",head->next->next->Jer_No);
	printf("%f\n",head->next->next->Avg);
}
