#include<stdio.h>
#include<stdlib.h>

typedef struct demo{
	
	struct demo *prev;
	int data;
	struct demo *next;
}demo;

demo *head = NULL;
demo* createNode(){
	
	demo *newNode = (demo*)malloc(sizeof(demo));
	
	demo *prev = NULL;

	printf("Enter the Data : ");
	scanf("%d",&newNode->data);

	demo *next = NULL;

	return newNode;
}
void addNode(){
	
	demo *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		demo *temp = head;

		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
}

void addFirst(){
	
	demo *newNode = createNode();


	if(head ==  NULL){
		
		head = newNode;
	}else{
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
}

void addLast(){

	addNode();
}
int countNode(){
	
	demo *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}
int addAtPos(int pos){
	
	int count  = countNode();

	if(pos <= 0 || pos > count+1){
		printf("Wrong Position\n");
		return -1;
	}else {
		if(pos == count + 1){
			
			addLast();
		}else if(pos == 1){
			
			addFirst();
		}else{
			demo *newNode = createNode();
			demo *temp = head;

			while(pos - 2){
				temp = temp->next;
				pos--;
			}
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next->prev = newNode;
			temp->next = newNode;
			
			return 0;
		}

	}
}

void deleteFirst(){
	int count = countNode();
	if(count == 0){
		
		printf("Nodes NOT FOUND,First add the Node then DELETE it.\n");
	}else if(head->next == NULL){
		
		free(head);
		head = NULL;
	}else{

		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}
}

void deleteLast(){
	int count = countNode();

	if(count == 0){
		
		printf("Nodes NOT FOUND,First add the Node then DELETE it.\n");
	}else if(head->next == NULL){
		
		free(head);
		head = NULL;
	}else{
		demo *temp = head;

		while(temp->next->next != NULL){
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
	
}	

int deleteAtpos(int pos){
	
	int count = countNode();

	if(pos <= 0 || pos > count){
		printf("Wrong Choice.\n");
		return -1;
	}else{
		if(pos == count){
			deleteLast();
		}else if(pos == 1){
			deleteFirst();
		}else{
			
			demo *temp = head;
			while(pos - 2){
				
				temp = temp->next;
				pos--;
			}
			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
			return 0;
		}
	}
}
void printDLL(){
	
	demo *temp = head;

	while(temp->next != NULL){
		
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|\n",temp->data);
}
void main(){
	
	char choice;
	do{
		int ch;
		printf("1.Add Node Nodes\n2.Add First Node\n3.Add Last Node\n4.Add At Postion Node\n5.Count Nodes\n6.Delete First Node\n7.Delete Last Node\n8.Delete At Position\n9.Print Doubly Linked List\n");
		printf("Enter the your Choice : ");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				{
					int node;
					printf("Enter the no Nodes : ");
					scanf("%d",&node);

					for(int i = 1;i <= node;i++){
						addNode();
					}
				}
				break;
			case 2:
				addFirst();
				break;
			case 3:
				addLast();
				break;
			case 4:
				int pos;
				printf("Enter the Position : ");
				scanf("%d",&pos);
				addAtPos(pos);
				break;
			case 5:
				int count = countNode();
				printf("Total Nodes in Linked List : %d\n",count);
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
					printf("Enter the position : ");
					scanf("%d",&pos);
					deleteAtpos(pos);
				}
				break;
			case 9:
				if(head == NULL){
		                        
					printf("Nodes NOT FOUND,First add the Node then PRINT it.\n");
				}else{
					printDLL();
				}
				break;
			default:
				printf("Wrong Choice\n");

		}
		
	getchar();
	printf("if you want continue this code then type [Y|y] else type [N|n] : ");
	scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
}
