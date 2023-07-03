/*
 Program 4 :
 	Write a program in C to insert a new node at the beginning of a Singly Linked List.

	Test Data and Expected Output :

 		Input the number of nodes : 3                                                                                
 		Input data for node 1 : 5                                                                                    
 		Input data for node 2 : 6                                                                                    
 		Input data for node 3 : 7                                                                                    
                                                                                                              
 	Data entered in the list are :                                                                               
 		Data = 5                                                                                                     
 		Data = 6                                                                                                     
 		Data = 7                                                                                                     
                                                                                                              
 	Input data to insert at the beginning of the list : 4                                                        
                                                                                                              
 	Data after inserted in the list are :                                                                        
 		Data = 4                                                                                                     
 		Data = 5                                                                                                     
 		Data = 6                                                                                                     
 		Data = 7
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct node {

        int data;
        struct node *next;
}node;

node *head = NULL;

node* createNode() {

        node *newNode = (node*)malloc(sizeof(node));

        printf("Enter the Data : ");
        scanf("%d",&newNode->data);

        newNode->next = NULL;

        return newNode;
}

void addNode() {

        node *newNode = createNode();

        if(head == NULL) {

                head = newNode;
        } else {

                node *temp = head;

                while(temp->next != NULL) {

                        temp = temp->next;
                }
                temp->next = newNode;
        }
}

void addBeginningNode() {
	
	node *newNode = createNode();

	if(head == NULL) {

		head = newNode;
	} else {
		
		newNode->next = head;
		head = newNode;
	}
}

void printSLL() {

        if(head == NULL) {

                printf("Linked List is Empty\n");
        } else {

                node *temp = head;

                while(temp->next != NULL) {

                        printf("|%d|->",temp->data);
                        temp = temp->next;
                }
                printf("|%d|\n",temp->data);
        }
}
void main() {

        char ch;
        do {
                int choice;
                printf("\n1.Add Nodes.\n2.Add Biginnig Nodes\n3.Display Linked-List\n");

                printf("\nEnter your Choice : ");
                scanf("%d",&choice);

                switch(choice) {

                        case 1 :
                                int num;
                                printf("\nEnter the Number of Nodes : ");
                                scanf("%d",&num);

                                for(int i = 0; i < num; i++) {

                                        addNode();
                                }
                                break;

                        case 2 :
                                addBeginningNode();
                                break;

                        case 3 :
                                printSLL();
                                break;

                        default :
                                printf("Wrong Choice\n");
                                break;

                }

                getchar();
                printf("\nDo you want continue?");
                scanf("%c",&ch);
        } while(ch == 'y' || ch == 'Y');
}
