/*
 Program 1 : Write a C program to check a stack is full or not using an array with push and pop operations. 
	
 	Expected Output:
		Stack size: 3
		Original Stack: 1 2 3 
		Push another value and check if the stack is full or not!
		Stack is full!

		Stack size: 3
		Original Stack: 10 20 
		Check the said stack is full or not!
		Stack is not full!
 */

#include<stdio.h>

int top = -1,size = 0,flag = 0;

int push(int stack[]) {

        if(top == size - 1) {

                printf("Stack is Full\n");
        } else {

                top++;
                printf("Push a data in Stack : ");
                scanf("%d",&stack[top]);
                return stack[top];
        }
}
int pop(int stack[]) {

        if(top == -1) {

                flag = 0;
                return -1;
        } else {

                int data = stack[top];
                top--;
                flag = 1;
                return data;
        }
}
int stackFull(int stack[]) {

        if(top == size - 1) {
		
		return -1;
	} else {
		
		return 0;
	}
}
void main() {

        printf("Enter the size of stack : ");
        scanf("%d",&size);

        int stack[size];

        char ch;
        do {
                int choice;
                printf("1.PUSH\n2.POP\n3.STACK IS FULL OR NOT\n");

                printf("Enter your choice : ");
                scanf("%d",&choice);

                switch(choice) {

                        case 1 :
                                int ret = push(stack);
                                printf("%d is Pushed\n",ret);
                                break;

                        case 2 :
                                ret = pop(stack);
                                if(flag == 0 && ret == -1) {

                                        printf("Stack is Underflow\n");
                                } else {

                                        printf("%d is Poped\n",ret);
                                }
                                break;

                        case 3 :
                                ret = stackFull(stack);
                                if(ret == -1) {

                                        printf("Stack is Full\n");
                                } else {

                                        printf("Stack is not Full\n");
                                }
                                break;

                        default :
                                printf("Wrong Choice\n");
                }
                getchar();
                printf("Do you want to continue?");
                scanf("%c",&ch);
        } while(ch == 'Y' || ch == 'y');
}

