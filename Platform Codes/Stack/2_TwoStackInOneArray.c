#include<stdio.h>
int size1, size2,top1 = -1,top2,flag = 0;

int push1(int stack[],int data) {

	if(top1 == top2) {
		flag = 0;
		return -1;
	} else {
		flag = 1;
		top1++;
		stack[top1] = data;
	}
}

int push2(int stack[],int data) {

	if(top2 == (size1 + size2) - 1) {
		
		flag = 0;
		return -1;
	} else {
		flag = 1;
		top2++;
		stack[top2] = data;
	}
}

int pop1(int stack[]) {
	
	if(top1 == -1) {
		
		flag = 0;
		return -1;
	} else {
		flag = 1;
		int data = stack[top1];
		top1--;
		return data;
	}
}
int pop2(int stack[]) {
	
	if(top2 == size1 - 1) {
		
		flag = 0;
		return -1;
	} else {
		flag = 1;
		int data = stack[top2];
		top2--;
		return data;
	}
}
void main() {
	printf("Enter the size of 1st stack : ");
	scanf("%d",&size1);
	
	top2 = size1 - 1;

	printf("Enter the size of 2nd stack : ");
	scanf("%d",&size2);

	int stack[size1 + size2];

	printf("\nElement pushed in Stack 1st : \n");
	for(int i = 0; i < size1 + 1; i++) {
		
		int ret = push1(stack,i + 1);
		if(ret == -1 && flag == 0) {
			
			printf("\n1st Stack is Overflow\n");
		} else {

			printf("Pushed Value in stack 1st : %d\n",ret);
		}
	}
	
	printf("\nElement pushed in Stack 2nd : \n");
	for(int i = 0; i < size2 + 1; i++) {
		
		int ret = push2(stack,i + 10);
		
		if(ret == -1 && flag == 0) {
			
			printf("\n2nd Stack is Overflow\n");
		} else {
			
			printf("Pushed Value in stack 2nd : %d\n",ret);
		}
	}

	printf("\nStack 1st : \n");
	for(int i = 0; i < size1 + 1; i++) {
		
		int ret = pop1(stack);
		if(ret == -1 && flag == 0) {

			printf("\n1st Stack is Underflow\n");
		} else {

			printf("%d ",ret);
		}
	}
	
	printf("\nStack 2nd : \n");
	for(int i = 0; i < size2 + 1; i++) {

		int ret = pop2(stack);
		if(ret == -1 && flag == 0) {
			
			printf("\n2nd Stack is UnderFlow\n");
		} else {

			printf("%d ",ret);
		}
	}
}
