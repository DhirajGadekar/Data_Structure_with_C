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

void 

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
                printf("\n1.Add Nodes.\n2.Linked List to String\n3.Print Linked-List\n");

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
				char buffer[100];
                                convertSLLtoString(buffer);
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

