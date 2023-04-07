#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct cricPlayer{
	
	char pName[20];
	int JerNo;
	float Avg;
	struct cricPlayer *next;
}Player;

void putData(Player *ptr1,Player *ptr2){
	
	printf("Enter the Name of Player : ");
	scanf(" %[^\n]",ptr1->pName);

	printf("Enter the Jercy No : ");
	scanf("%d",&(*ptr1).JerNo);

	printf("Enter the Average : ");
	scanf("%f",&(*ptr1).Avg);
	
	ptr1->next = ptr2;
}

void accessData(Player *ptr){
	
	printf("Name = %s\n",ptr->pName);
	printf("Jer No = %d\n",ptr->JerNo);
	printf("Avg = %f\n",ptr->Avg);
	printf("%p\n",ptr->next);
	printf("\n");
}

void main(){
	
	Player *ptr1 = (Player*)malloc(sizeof(Player));
	Player *ptr2 = (Player*)malloc(sizeof(Player));
	Player *ptr3 = (Player*)malloc(sizeof(Player));
	Player *ptr4 = (Player*)malloc(sizeof(Player));

	putData(ptr1,ptr2);
	putData(ptr2,ptr3);
	putData(ptr3,ptr4);
	putData(ptr4,NULL);

	accessData(ptr1);
	accessData(ptr2);
	accessData(ptr3);
	accessData(ptr4);

}
