/* 
 1.WAP for the Linked List of malls consisting of its name,number of shops & revenue,
 Connect 3 malls in LinkedList & Print their data 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Mall{
	
	char mName[20];
	int NumofShops;
	float rev;
	struct Mall *next;
}mall;

mall *head = NULL;

void addData(){
	
	mall *newNode = (mall*)malloc(sizeof(mall));
	
	printf("Enter the Name of Mall : ");
	fgets(newNode->mName,20,stdin);

	printf("Enter the Number of Shops : ");
	scanf("%d",&newNode->NumofShops);

	printf("Enter the revenue : ");
	scanf("%f",&newNode->rev);

	getchar();

	newNode->next = NULL;

	if(head == NULL){
		head = newNode;
	}else{
		mall *temp = head;

		while(temp->next != NULL){
			
			temp = temp->next;

		}
		temp->next = newNode;
	}
}

void printLL(){

	mall *temp = head;
	
	while(temp != NULL){
	        temp->mName[strlen(temp->mName) - 1] = '\0';
		printf("|%s -> ",temp->mName);
		printf("%d -> ",temp->NumofShops);
		printf("%f |",temp->rev);

		temp = temp->next;
	}
	printf("\n");
}

void main(){

	addData();
	addData();
	addData();
	printLL();
}


