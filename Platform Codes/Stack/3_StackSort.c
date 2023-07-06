#include<stdio.h>
int size, top = -1, flag = 0;

void push(int *stack, int data) {
	
	if(top == size - 1) {
		
		printf("Stack is OverFlow\n");
	} else {
		
		top++;
		stack[top] = data;
	}
}

int pop(int stack[]) {
	
	if(top == -1) {

		printf("Stack  is UnderFlow\n");
	} else {
		
		int data = stack[top];
		top--;
		return data;
	}
}

void sortStack(int stack[]) {
	
	for(int i = 0; i < size - 1; i++) {
		
		for(int j = 0; j < size - 1 - i; j++) {

			if(stack[j] > stack[j + 1]) {
				
				int temp = stack[j];
				stack[j] = stack[j + 1];
				stack[j + 1] = temp;
			}
		}
	}
}

void main() {
	
	printf("Enter the size of Stack : ");
	scanf("%d",&size);

	int stack[size];
	
	char ch;
	do {
		int choice;
		printf("1.PUSH\n2.POP ALL ELEMENTS\n3.SORT STACK\n");
		printf("Enter your Choice : ");
		scanf("%d",&choice);

		switch(choice) {
			
			case 1 :int data;
			       	printf("Push Value : ");
				scanf("%d",&data);	
				push(stack,data);
				break;
			case 2 :
				for(int i = 0; i < size + 1; i++) {

					int ret = pop(stack);
					printf("%d is Poped\n",ret);
				}
				break;

			case 3 :
				sortStack(stack);
				break;

			default : 
				printf("Wrong Choice\n");
		}

		getchar();
		printf("Do you want to continue?");
		scanf("%c",&ch);
	} while(ch == 'y' || ch == 'Y');
}
