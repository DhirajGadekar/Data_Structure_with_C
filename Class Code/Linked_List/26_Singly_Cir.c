#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node *next;
}node;

node *head = NULL;

node* createNode(){
	
	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter the data : ");
	scanf("%d",&newNode->data);

	newNode->next = NULL;
	return newNode;
}
void addNode(){
	node *newNode = createNode();

	if(head == NULL){
		head = newNode;
		newNode->next = head;
	}else{
		node *temp = head;
		while(temp->next != head){
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = head;
	}
}	

int countNode(){
	node *temp = head;
	int count = 0;
	if(head == NULL){
		return 0;
	}else{
		while(temp->next != head){
			count++;
			temp = temp->next;
		}
		count++;
	}
	return count;
}
void addFirst(){
	
	node *newNode = createNode();

	if(head == NULL){
		head = newNode;
	        newNode->next = head;	
	}else{
		node *temp = head;
		while(temp->next != head){
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = head;
		head = newNode;
	}
}

void addLast(){
	addNode();
}

int addatpos(int pos){
	int count = countNode();
	if(pos <= 0 || pos > count + 1){ 
		printf("Invalid Position.\n");
		return -1;
	}else{
		if(pos == 1){
			addFirst();
		}else if(pos == count + 1){
			addLast();
		}else{
			node *newNode = createNode();
			node *temp = head;
			while(pos - 2){
				temp = temp->next;
			}
			newNode->next = temp->next;
			temp->next = newNode;
			return 0;
		}
	}
}

void deleteFirst(){

	if(head == NULL){
		printf("Linked List is Empty.\n");
	}else if(head->next == head){
		free(head);
		head = NULL;
	}else{
		node *temp = head;
		while(temp->next != head){
			temp = temp->next;
		}
		temp->next = head->next;
		temp = head;
		head = temp->next;
		free(temp);
	}
}

void deleteLast(){
	if(head == NULL){
                printf("Linked List is Empty.\n");
        }else if(head->next == head){
                free(head);
                head = NULL;
        }else{
                node *temp = head;
		while(temp->next->next != head){
			temp = temp->next;
		}
		free(temp->next);
		temp->next = head;
	}

}

int deleteatpos(int pos){
	int count = countNode();

	if(pos <= 0 || pos > count){
		printf("Invalid Position.\n");
		return -1;
	}else{
		if(pos == 1){
			deleteFirst();
		}else if(pos == count){
			deleteLast();
		}else{

			node *temp = head;
			while(pos - 2){
				temp = temp->next;
				pos--;
			}
			head = temp->next;
			temp->next = head->next;
			free(head);
			head = temp;

		}
	}
}
int printSCLL(){
	
	if(head == NULL){
		printf("Linked List is Empty.\n");
		return -1;
	}else{
		node *temp = head;
		printf("%p\n",temp);
		while(temp->next != head){
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
		printf("|%d|\n",temp->data);
		
		printf("%p\n",temp->next);
		return 0;

	}
}
void main(){
	printf("<-----------------------------START MAIN--------------------------------->");
	char choice;
	do{
		int num;
		printf("1.Add Node\n2.Add First Node\n3.Add Last Node\n4.Add at Position\n5.Count Nodes\n6.Delete First Node\n7.Delete Last Node\n8,Delete at Position\n9.Print Node\n");
		printf("Enter your choice : ");
		scanf("%d",&num);

		switch(num){
			case 1:
				{
					int node;
					printf("Enter the no of nodes : ");
					scanf("%d",&node);

					for(int  i = 1;i <= node;i++){
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
				printf("Enter the position : ");
				scanf("%d",&pos);
				addatpos(pos);
				break;
			case 5:{

					int count = countNode();
					printf("Total Nodes in Linked list : %d\n",count);
			       }
				break;
			case 6:
				deleteFirst();
				break;
			case 7:
				deleteLast();
				break;
			case 8:
				printf("Enter the position  : ");
				scanf("%d",&pos);
				deleteatpos(pos);
				break;
			case 9:
				printSCLL();
				break;
			default:
				printf("Invalid Choice.\n");
				
		}
		getchar();
		printf("Do you want continue : ");
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
	printf("<-----------------------------END MAIN--------------------------------->");
}
