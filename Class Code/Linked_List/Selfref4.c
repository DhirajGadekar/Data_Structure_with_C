#include<stdio.h>
#include<string.h>

typedef struct Laptop_com{
	
	char L_Name[20];
	int Tot_sale;
	float price;
	struct Laptop_com *next;
}Company;

void main(){

	Company obj1,obj2,obj3;

	Company *head = &obj1;

	strcpy((*head).L_Name,"Hp 15s");
	(*head).Tot_sale = 10000;
	(*head).price = 51599.00;
	head->next = &obj2;

	strcpy(head->next->L_Name,"Dell Vostro");
	head->next->Tot_sale = 12000;
	head->next->price = 57990.00;
	head->next->next = &obj3;

	strcpy(head->next->next->L_Name,"Asus ZenBook");
	head->next->next->Tot_sale = 90000;
	head->next->next->price = 104990.00;
	head->next->next->next = NULL;

	printf("%s\n",(*head).L_Name);
	printf("%d\n",(*head).Tot_sale);
	printf("%f\n",(*head).price);

	printf("%s\n",head->next->L_Name);
	printf("%d\n",head->next->Tot_sale);
	printf("%f\n",head->next->price);
	
	printf("%s\n",head->next->next->L_Name);
	printf("%d\n",head->next->next->Tot_sale);
	printf("%f\n",head->next->next->price);
}
