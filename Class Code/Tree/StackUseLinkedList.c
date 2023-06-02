#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Stack {
	
	int data;
	struct Stack *next;
};

int flag = 0;
struct Stack* top = NULL;

void push(int data) {
	
	struct Stack* newNode = (struct Stack*)malloc(sizeof(struct Stack));

	newNode->data = data;
	newNode->next = top;
	top = newNode;
}

int pop() {
	
	if(top == NULL) {
		
		flag = 1;
		return -1;
	} else {
		
		flag = 0;
		struct Stack* temp = top;
		int data = top->data;

		top = top->next;
		free(temp);

		return data;
	}	

}
void displayStack() {
	
	if(top == NULL) {

		printf("Stack is Empty\n");
	} else {
		
		struct Stack* temp = top;

		while(temp != NULL) {

			printf("%d\n",temp->data);
			temp = temp->next;
		}
	}
}
void main() {
	
	char ch;
	do {
		int choice;
		printf("1.PUSH\n2.POP\n3.DISPLAY\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice) {
			
			case 1 :
				int data;
				printf("Enter Data : ");
				scanf("%d",&data);
				push(data);
				break;
			case 2 :
				int ret = pop();
				if(ret != -1 && flag == 0) {
					printf("%d is POP\n",ret);
				}else {
					printf("Stack is Empty\n");
				}
				break;
			case 3 :
				displayStack();
				break;
			default :
				printf("Wrong Choice\n");

		}
		getchar();
		printf("Do yout want continue? : ");
		scanf("%c",&ch);
	} while(ch == 'Y' || ch == 'y');
}
