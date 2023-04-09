/*
 Problem 5 : Write a program in C to count the digits of a given number using recursion. 
		Test Data :
			Input a number : 50
		Expected Output :
			The number of digits in the number is :  2
 */

#include<stdio.h>

int digit_count(int digit, int count){
	
	if(digit != 0){
		
		count++;
		digit = digit / 10;
		digit_count(digit,count);
	}else{
		
		return count;
	}

}
void main(){

	int digit;
	printf("Enter the Digit  : ");
	scanf("%d",&digit);
	
	int count = 0;
	int countD = digit_count(digit,count);
	printf("The number of digits in the number is : %d\n",countD);

}
