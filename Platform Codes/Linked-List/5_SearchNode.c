/*
 Program 5 : Write a program in C to search for an existing element in a singly linked list.
	
 	Test Data and Expected Output :
		Input the number of nodes : 3                                                                                
                                                                                                              
 			Input data for node 1 : 2                                                                                    
 			Input data for node 2 : 5                                                                                    
 			Input data for node 3 : 8                                                                                    
                                                                                                              
 	Data entered in the list are :                                                                               
 			Data = 2                                                                                                     
 			Data = 5                                                                                                     
 			Data = 8                                                                                                     
                                                                                                              
 	Input the element to be searched : 5                                                                         
 	
	Element found at node 2
 */

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
        }else{
                node *temp = head;

                while(temp->next != NULL){

                        temp = temp->next;
                }
                temp->next = newNode;
        }
}

int searchNode(int searchEle) {
	
	int count = 0;
	if(head == NULL) {
		
		return -1;
	} else {
		
		node *temp = head;
		while(temp != NULL) {
			
			count++;
			if(temp->data == searchEle) {
				return count;
			}
			temp = temp->next;
		}
	}
	return -1;
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
                printf("\n1.Add Nodes.\n2.Search Element\n3.Print Linked-List\n");

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
				int searchEle;
				printf("Enter the search element : ");
				scanf("%d",&searchEle);
                                int ret = searchNode(searchEle);
				if(ret == -1) {
					
					printf("Element Node Found in Linked List\n");
				} else {
					
					printf("Element Found at Node %d\n",ret);
				}
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
