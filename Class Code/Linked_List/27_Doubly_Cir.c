//Doubly Circular Linked List : 
 

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	
	struct node *prev;
	int data;
	struct node *next;
}node;

node *head = NULL;

node* createNode(){
	
	node *newNode = (node*)malloc(sizeof(node));

	newNode->prev = NULL;

	printf("Enter the data : ");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}
void addNode(){
	node *newNode = createNode();

	if(head == NULL){
		head = newNode;
		newNode->prev = head;
		newNode->next = head;
	}else{
		head->prev->next = newNode;
                newNode->prev = head->prev;
                newNode->next = head;
                head->prev = newNode;
	}
}

int countNode(){

	node *temp = head;
	if(head == NULL){
		
		return 0;
	}else{

		int count = 0;
		while(temp->next != head){
			count++;
			temp = temp->next;
		}
		count++;
		return count;
	}
}
void addFirst(){
	
	node *newNode = createNode();

	if(head == NULL){
		head = newNode;
		newNode->prev = head;
		newNode->next = head;
	}else{
		
		head->prev->next = newNode;
		head->prev = newNode;
		newNode->prev = head->prev;
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
		printf("Invalid Position\n");
		return -1;
	}else{
		if(pos == count + 1){
			addLast();
		}else if(pos == 1){
			addFirst();
		}else{
			node *newNode = createNode();
			node *temp = head;
			while(pos - 2){
				temp = temp->next;
				pos--;
			}
			newNode->next = temp->next;
			temp->next->prev = newNode;
			newNode->prev = temp;
			temp->next = newNode;
		}
		return 0;

	}

}

int deleteFirst(){

	if(head == NULL){
		printf("Linked List is Empty\n");
		return -1;
	}else{
		if(head->next == head){
			free(head);
			head = NULL;
		}else{

			head->next->prev = head->prev;
			head = head->next;
			free(head->prev->next);
			head->prev->next = head;
		}
		return 0;

	}
}

int deleteLast(){

        if(head == NULL){
                printf("Linked List is Empty\n");
                return -1;
        }else{
                if(head->next == head){
                        free(head);
                        head = NULL;
                }else{

                        head->prev = head->prev->prev;
			free(head->prev->next);
			head->prev->next = head;

                }
                return 0;

        }
}

int deleteatpos(int pos){
	
	int count = countNode();
	if(pos <= 0 || pos > count){
		printf("Invalid Position.\n");
		return -1;
	}else{
		if(pos == count){
			
			deleteLast();
		}else if(pos == 1){
		
			deleteFirst();
		}else{
			node *temp = head;
			while(pos - 2){
				temp = temp->next;
				pos--;
			}
			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
		}

		return 0;
	}
}
void printDCLL(){
	printf("\n");
	if(head == NULL){
		printf("Linked List is Empty.\n");
	}else{

		node *temp = head;
		while(temp->next != head){
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
		printf("|%d|\n",temp->data);

	}
}
void main(){
	printf("<-----------------------------------START MAIN------------------------------------>\n");
	char choice;
	do{
		int num;
		printf("\n1.Add Node\n2.Add First Node\n3.Add Last\n4.Add At Position\n5.Count Node\n6.Delete First Node\n7.Delete Last Node\n8.Delete At Position\n9Print Linked List\n");
		printf("Enter your Choice : ");
		scanf("%d",&num);

		switch(num){
			case 1:{
					int node;
					printf("Enter the no of nodes : ");
					scanf("%d",&node);
					for(int i = 1;i <= node;i++){
						addNode();
					}
			       		printDCLL();
					printf("Nodes SuccessFully Added.\n");
				}
			       break;
			case 2:
			       addFirst();
			       printDCLL();
			       printf("Nodes SuccessFully Added.\n");
			       break;
			case 3:
			       addLast();
			       printDCLL();
			       printf("Nodes SuccessFully Added.\n");
			       break;
			case 4:
			       int pos;
			       printf("Enter the position : ");
			       scanf("%d",&pos);
			       addatpos(pos);
			       printf("Nodes SuccessFully Added.\n");
			       printDCLL();
			       break;
			case 5:
			       int count = countNode();
			       printf("Total Linked List : %d\n",count);
			       break;
			case 6:
			       deleteFirst();
			       printf("Nodes SuccessFully Deleted.\n");
			       printDCLL();
			       break;
			case 7:
			       deleteLast();
			       printf("Nodes SuccessFully Deleted.\n");
			       printDCLL();
			       break;
			case 8:{
			       		int pos;
			       		printf("Enter the position : ");
			       		scanf("%d",&pos);
			       		deleteatpos(pos);
			       }
			       printf("Nodes SuccessFully Deleted.\n");
			       printDCLL();
			       break;
			case 9:
			       printDCLL();
			       break;
			default :
			       printf("Invalid Choice\n");
		}
		getchar();
		printf("If you want continue the code then type [Y|y] else type [N|n] : ");
		scanf("%c",&choice);

	}while(choice == 'Y' || choice == 'y');
	printf("\n<-------------------------------------END MAIN-------------------------------------->\n");
}

