//Stack Using Array :

#include<stdio.h>

int top = -1,size = 0,flag = 0;

int push(int *stack){
	
	if(top == size - 1){
		printf("Stack is Overflow\n");
		return -1;
	}else{
		top++;
		printf("Enter the data : ");
		scanf("%d",(stack + top));

		return 0;
	}

}

int pop(int *stack){
	
	if(top == -1){
		flag = 0;
		printf("Stack underflow\n");
		return -1;
	}else{
		flag = 1;
		int data = stack[top];
		top--;
		
		return data;
	}

}

int peek(int *stack){
	
	if(top == -1){
		flag = 0;
		printf("Stack is UnderFlow\n");
		return -1;
	}else{
		flag = 1;
		return stack[top];

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
