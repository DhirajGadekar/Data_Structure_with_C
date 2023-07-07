#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int flag = 0;
typedef struct stack {

        int data;
        struct stack *next;
}stack;

stack *top = NULL;

void push() {

        stack *newNode = (stack*)malloc(sizeof(stack));

        printf("Enter a Data In Stack : ");
        scanf("%d",&newNode->data);

        newNode->next = top;

        top = newNode;
}
bool isEmpty() {

        if(top == NULL) {

                return true;
        } else {

                return false;
        }
}

int pop() {

        if(isEmpty()) {

                flag = 0;
                return -1;
        } else {

                flag = 1;
                int data = top->data;
                stack *temp = top;
                top = top->next;
                free(temp);

                return data;
        }
}

int peek() {

        if(isEmpty()) {

                flag = 0;
                return -1;
        } else {

                flag = 1;
                return top->data;
        }
}
void main() {

        char ch;
        do{
                int choice;
                printf("1.PUSH\n2.POP\n3.PEEK\n4.ISEMPTY\n");

                printf("Enter your Choice : ");
                scanf("%d",&choice);

                switch(choice) {

                        case 1 :
                                push();
                                break;

                        case 2 :
                                int data = pop();
                                if(flag == 0 || data == -1) {

                                        printf("Stack is UnderFlow\n");
                                } else {

                                        printf("%d is Poped\n",data);
                                }
                                break;

                        case 3 :
                                int ret1 = peek();
                                if(flag == 0 || ret1 == -1) {

                                        printf("Stack is UnderFlow\n");
                                } else {

                                        printf("%d is Peek Element\n",ret1);
                                }
                                break;

                        case 4 :
                                bool ret2 = isEmpty();
                                if(ret2) {

                                        printf("Stack is Empty\n");
                                } else {

                                        printf("Stack is not Empty\n");
                                }
                                break;

                        default :
                                printf("Wrong Choice\n");
                                break;
                }
                getchar();
                printf("Do you want continue? : ");
                scanf("%c",&ch);
        } while(ch == 'y' || ch == 'Y');
}
