#include<stdio.h>
#include<stdlib.h>

typedef struct demo{
	int data;
	struct demo *next;
}demo;

demo *head = NULL;

demo* createNode(){
	
	demo *newNode = (demo*)malloc(sizeof(demo));

	printf("Enter the data : ");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

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
	}
}

void addFirst(){

	demo *newNode = createNode();
	
	if(head == NULL){
		
		head = newNode;
	}else{
		
		newNode->next = head;
		head = newNode;
	}
	
}

void addLast(){
	
	addNode();
}

int countNode(){
		if(head == NULL){
			
			return 0;
		}else{
		int count = 0;
		demo *temp = head;

		while(temp != NULL){
			count++;
			temp =temp->next;
		}
		return count;
	}
}

void addAtpos(int pos){
	
	int count = countNode();
	if(pos <= 0 || pos > count + 1){

		printf("Wrong Postion Node.\n");
		
	}else{
		
		if(pos == (count + 1)){
	
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
			temp->next = newNode;
		}
		
	}

}

void deleteFirst(){
	
	demo *temp = head;

	if(head->next == NULL){
		free(head);
		head = NULL;
	}else{
		head = head->next;
		free(temp);
	}
}

void deleteLast(){
	
	demo *temp = head;
	
	if(head->next == NULL){
		
		free(head);
		head = NULL;	
	}else{
		while(temp->next->next != NULL){
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}
	
void deleteAtpos(int pos){
	
	int count = countNode();
	if(pos <= 0 || pos > count){
		printf("Wrong Input.\n");
	}else{

		if(pos == count){
			deleteLast();
		}else if(pos == 1){
			deleteFirst();
		}else{
			demo *temp1 = head,*temp2 = head;
			while(pos - 2){
				temp1 = temp1->next;
				temp2 = temp2->next;
				pos--;
			}
			temp2 = temp2->next;
			temp1->next = temp1->next->next;
			free(temp2);
		}
	}
}
void printLL(){

	printf("\n");
	demo *temp = head;

	while(temp != NULL){
		if(temp->next == NULL){
			
			printf("|%d|",temp->data);
		}else{
			
			printf("|%d|->",temp->data);
		}
		temp = temp->next;
	}
	printf("\n");
}

void main(){
	
	char choice;

	do{
		int num;
		printf("1.Add Node\n2.Add First\n3.Add Last\n4.add At Position\n5.count Node\n6.Delete First\n7.Delete Last\n8.Delete Node at Position\n9.Print Linked List\n");
		printf("Enter your Choice : ");
		scanf("%d",&num);

		switch(num){
			case 1:{
				int node;
				printf("Enter the no of Node : ");
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
			case 4: {
				int pos;
				printf("Enter the postion : ");
				scanf("%d",&pos);

				addAtpos(pos);
				}
				break;
			case 5:{
				int count = countNode();
				printf("Total Nodes in Linked List : %d",count);
			       }
				break;
			case 6:
				deleteFirst();
				break;
			case 7:
				deleteLast();
				break;
			case 8:{
				int pos;
				printf("Enter the Node Delete Position : ");
				scanf("%d",&pos);

				deleteAtpos(pos);
			       }
				break;
			case 9:{
				int count1 = countNode();
				
				if(count1 == 0){
					
					printf("First Add Node\n");
				}else{
					
					printLL();
				}
			       
			       }
				break;
			default :
				printf("Wrong Input.\n");
		}

	getchar();	
	printf("\nDo you want to continue ? : ");
	scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
}
