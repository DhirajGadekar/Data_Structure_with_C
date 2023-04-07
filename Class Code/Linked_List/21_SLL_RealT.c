
#include<stdio.h>
#include<stdlib.h>

typedef struct BattingOrder{
	int ord;
	char pName[20];
	struct BattingOrder *next;
}bat;
bat * head = NULL;
// 0
bat * createNode(){
	bat * newNode = (bat *)malloc(sizeof(bat));
	getchar();
	printf("Enter the PlayerName  : \n");
	char ch;
	int i=0;
	while((ch=getchar()) != '\n'){
		(*newNode).pName[i]=ch;
		i++;
	}
	printf("Enter the Position of Player  : \n");
	scanf("%d",&(newNode->ord));
	newNode->next = NULL;

	return newNode;
}
// 1
void addNode(){
	bat *newNode = createNode();
	if(head==NULL){
		head = newNode;
	}else{
		bat *temp = head;
		while(temp->next != NULL){		
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
// 2
void addFirst(){
	bat *newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{	
		newNode->next = head;
		head = newNode;
	}
}
//3
void addLast(){
	addNode();
}
//5
int nodeCount(){
	bat *temp = head;
	int count = 0;
	while(temp != NULL){	
		temp = temp->next;
		count++;
	}
	return count;
}
//4
void addAtPos(int pos){
	int count = nodeCount();
	if(pos>(count + 1) || pos<=0){
		printf("Please Enter Valid Position \n");
	}else if(pos == count +1){
		addLast();
	
	}else if(pos == 1){
		addFirst();
	}else{
		bat *temp = head;
		while(pos-2){
			temp= temp->next;
			pos--;
		}
		bat *newNode = createNode();
		newNode->next = temp->next;
		temp->next = newNode;
	}
}
//6
void deleteFirst(){
	if(head==NULL){
		printf("No Batting Order is present \n");
	}else if(head->next == NULL){
		free(head);
		head = NULL;
		printf("Batting Order is Cleared \n");
	}else{
		bat *temp = head;
		head = head->next;				// 1 St Way 
		//head = temp->next;				// 2 Nd Way			
		free(temp);
	}
}
//7
void deleteLast(){
	bat *temp = head;
	if(head->next ==NULL){
		free(temp);
		head = NULL;
		printf(" Batting Order is Cleared \n");
	}else if(head->next !=NULL){
		while(temp->next->next != NULL){
		
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}else{	
		printf("No Batting Order is present \n");
	}
}
// 8
void delAtPos(int pos){
	int count = nodeCount();
	if(pos<=0 || pos>count){	
		printf("Invalid Position Entered \n");
	}else{
		if(pos==1){
			deleteFirst();
		}else if(pos == count){
			deleteLast();
		}else{
			bat *temp =head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			bat *temp2 = temp->next;
			temp->next = temp->next->next;
			free(temp2);
		}
	}
}
//9
void printll(){
	bat *temp =head;
	while(temp->next != NULL){	
		printf("|%d : %s |->",temp->ord,temp->pName);
		temp=temp->next;
	}
	printf("|%d : %s |\n",temp->ord,temp->pName);
}

void main(){
	printf("\n\n <----------------START Main----------------->\n\n");

	char choice;
	do{
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addLast\n");
		printf("4.addAtPos\n");
		printf("5.countNode\n");
		printf("6.deleteFirst\n");
		printf("7.deleteLast\n");
		printf("8.deleteAtPos\n");
		printf("9.printll - Print Your Batting Order\n");

		int ch;
		printf("Enter the Choice : \n");
		scanf("%d",&ch);

		switch(ch){
			case 1:{
				int node;
				printf("How many nodes you want : ");
				scanf("%d",&node);
				for(int i = 1;i <= node;i++){

					addNode();
				}
				break;
			       }
			case 2:
				addFirst();
				break;
			case 3:
				addLast();
				break;
			case 4:
				{
				       int pos;
				       printf("Enter the Position : \n");
				       scanf("%d",&pos);
				       addAtPos(pos);
			       }
				break;
			case 5:
				{
					int count = nodeCount();
					printf("Count : %d \n",count);
				}
				break;
			case 6:
				deleteFirst();
				break;
			case 7:
				deleteLast();
				break;
			case 8:
				{
				       int pos;
				       printf("Enter the Position : \n");
				       scanf("%d",&pos);
				       delAtPos(pos);
			       }
				break;
			case 9:
				printll();
				break;
			default :
				printf("Enter the Valid Choice \n");
				break;
		}
		getchar();
		printf("Do you wnat to Continue : \n");
		scanf("%c",&choice);

	}while(choice=='Y' || choice=='y');

	printf("\n\n <----------------END Main----------------->\n\n");
}
