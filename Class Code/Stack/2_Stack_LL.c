//Stack implementation by using Linked List :

#include<stdio.h>
#include<stdlib.h>

int size = 0,flag = 0;

typedef struct node{

	int data;
	struct node *next;
}node;

node *head = NULL;

node* createNode(){
	
	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter the data in stack : ");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

int countNode(){
	
	int count = 0;
	node *temp = head;

	while(temp != NULL){
		count++;
		temp = temp->next;
	}

	return count;

}
int push(){
	int count = countNode();

	if(size < count + 1){
		printf("Stack is OverFlow\n");
		return -1;
	}else{
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
		return 0;
	}

}

int pop(){

	if(head == NULL){
		flag = 0;
		printf("Stack is UnderFlow\n");
		return -1;
	}else{
		flag = 1;
		int data = 0;
		if(head->next == NULL){
			data = head->data;
			free(head);
			head = NULL;
		}else{

			node *temp = head;
			while(temp->next->next != NULL){
				temp = temp->next;
			}
			data = temp->next->data;
			free(temp->next);
			temp->next = NULL;
		}
		return data;
	}

}

int peek(){

	if(head == NULL){
		flag = 0;
		printf("stack is UnderFlow\n");
		return -1;
	}else{
		flag = 1;
		int data = 0;

		if(head->next == NULL){
			
			data = head->data;	
		}else{
			node *temp = NULL;
			while(temp->next != NULL){
				temp = temp->next;
			}
			data = temp->data;
		}
		return data;
	}

}

void main(){
        printf("<--------------------------------------START MAIN---------------------------------------->\n");
        printf("\nEnter the size of stack : ");
        scanf("%d",&size);
        int stack[size];

        char choice;
        do{
                int ch;
                printf("1.PUSH\n2.POP\n3.PEEK\n");
                printf("Enter the Choice : ");
                scanf("%d",&ch);

                switch(ch){
                        case 1:
                                push(stack);
                                break;
                        case 2:
                                int ret = pop(stack);
                                if(flag == 1){
                                        printf("%d is popped\n",ret);
                                }
                                break;
                        case 3:
                                int data = peek(stack);
                                if(flag == 1){
                                        printf("%d\n",data);
                                }
                                break;

                }
        getchar();
        printf("If you want continue this code then type [Y|y] else type [N|n] : ");
        scanf("%c",&choice);

        }while(choice == 'Y' || choice == 'y');
        printf("<--------------------------------------END MAIN---------------------------------------->\n");
}
