/*
 Program 10 : Write a program in C to find the Factorial of a number using recursion.
		Test Data :
		Input a number : 5
		Expected Output:
			The Factorial of 5 is : 120
 */

#include<stdio.h>

int factorial(int num){
	
	static int fact = 1;
	if(num != 0){

		fact = fact * num;
		factorial(--num);
	}else{
		
		return fact;
	}

}
void main(){
	
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);

	int fact = factorial(num);
	printf("The Factorial of %d is : %d\n",num,fact);
}
