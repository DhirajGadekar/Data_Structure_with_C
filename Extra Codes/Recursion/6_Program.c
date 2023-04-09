/*
 Program 6 :  Write a program in C to find the sum of digits of a number using recursion.
		Test Data :
			Input any number to find sum of digits: 25
		Expected Output:
			The Sum of digits of 25 = 7
 */

#include<stdio.h>

int digit_Sum(int digit){
	
	static int sum = 0;
	if(digit != 0){
		
		sum = sum + digit;
		digit_Sum(digit/10);
	}else{

		return sum;
	}
}

void main(){

	int digit;
	printf("Enter the digit : ");
	scanf("%d",&digit);

	int sum = digit_Sum(digit);
	printf("The sum of digit of %d = %d\n",digit,sum);
}
