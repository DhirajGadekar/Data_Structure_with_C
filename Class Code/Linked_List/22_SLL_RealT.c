//Real Time Example of Singly Linked list


#include<stdio.h>
#include<stdlib.h>

typedef struct MusicPlayer{
	
	char mName[20];
	int srno;
	float time;
	struct MusicPlayer *next;
}mplay;

mplay *head = NULL;
mplay* createNode(){
	
	mplay *newNode = (mplay*)malloc(sizeof(mplay));
	getchar();
	printf("Enter the name of Song : ");
	char ch;
	int  i = 0;
	while((ch = getchar()) != '\n'){
		(*newNode).mName[i++] = ch;
	}

	printf("Enter the sr.no Of Song : ");
	scanf("%d",&newNode->srno);

	printf("Enter the time of song : ");
	scanf("%f",&newNode->time);

	newNode->next = NULL;

	return newNode;
}
void addNode(){
	
	mplay *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		mplay *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

int countNode(){
	
	mplay *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	
	}
	return count;
}
void addFirst(){

	mplay *newNode = createNode();

	if(head == NULL){
		head == newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}
	
}
void addLast(){
	addNode();
}
int addatpos(int pos){
	
	int count = countNode();

	if(pos <= 0 || pos > count+1){
		printf("Node postion is Wrong.\n");
		return -1;
	}else{
		if(pos == count + 1){
			addLast();
		}else if(pos == 1){
			addFirst();
		}else{
			mplay *newNode = createNode();
			mplay *temp = head;

			while(pos - 2){
				temp = temp->next;
				pos--;
			}
			newNode->next = temp->next;
			temp->next = newNode;
			return 0;
		}
	}
}

void deleteFirst(){
	int count = countNode();
	if(count == 0){
		printf("Node NOT FOUND, First Add the Node the DELETE it.\n");
	}else if(head->next == NULL){
		free(head);
		head = NULL;
	}else{
		mplay *temp = head;

		head = head->next;
		free(temp);
	}
}

void deleteLast(){
	
	int count = countNode();

	if(count == 0){
		printf("Node NOT FOUND, First Add the Node the DELETE it.\n");
	}else if(head->next == NULL){
		free(head);
		head = NULL;
	}else{
		mplay *temp = head;

		while(temp->next->next != NULL){
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void deleteatpos(int pos){
	int count = countNode();

	if(pos <= 0 || pos > count){
		printf("Node Position is Wrong.\n");
	}else{
		if(pos == count){
			deleteLast();
		}else if(pos == 1){

			deleteFirst();
		}else{
			mplay *temp1 = head;
			mplay *temp2 = head;

			while(pos - 2){
				temp1 = temp1->next;
				temp2 = temp2->next;
				pos--;
			}
			temp2 = temp2->next;
			temp1->next = temp2->next;
			free(temp2);
		}
	}
}
void printSLL(){
	mplay *temp = head;
	while(temp->next != NULL){
		printf("|%d : %s : %0.2f|->",temp->srno,temp->mName,temp->time);
		temp = temp->next;
	}
	printf("|%d : %s : %0.2f|\n",temp->srno,temp->mName,temp->time);
}
void main(){
	
	printf("\n<-----------------------------START MAIN------------------------------->\n");
	char choice;

	do{
		int ch;
		printf("1.Add Node\n2.Add First Node\n3.Add Last Node\n4.Add At Position\n5.Count Nodes\n6.Delete First Node\n7.Delete Last Node\n8.Delete At Position\n9.Print Linked List\n");
		printf("Enter Your Choice : ");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				{
				int node;
				printf("Enter the no of Node : ");
				scanf("%d",&node);

				for(int i = 1; i <= node;i++){
					addNode();
				}
				}
				break;
			case 2:
				addFirst();
				break;
			case 3:addLast();
				break;
			case 4:
			       {	
				       int count = countNode();
				       int pos;
				       printf("Enter the ADD position in between (1 to %d): ",count+1);
				       scanf("%d",&pos);

				       addatpos(pos);
			       }
				break;
			case 5:
				int count = countNode();
				printf("Total Nodes In Linked List : %d",count);
				break;
			case 6:
				deleteFirst();
				break;
			case 7:
				deleteLast();
				break;
			case 8:
				{
					int count = countNode();
					int pos;
					printf("Enter the DELETE position in between (1 to %d): ",count);
					scanf("%d",&pos);

					deleteatpos(pos);
				}
				break;
			case 9:{
				       int count = countNode();
					if(count == 0){
						printf("Nodes NOT FOUND in Linked List First add Node the PRINT it.\n");
					}else{
						printSLL();
					}
			       }
				break;

			default:
				printf("Wrong Choice.\n");

		}
	
	getchar();
	printf("If you want countinue code then type [Y|y] else type [N|n] : ");
	scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');

	printf("\n<---------------------------------END MAIN----------------------------------->\n");
}
