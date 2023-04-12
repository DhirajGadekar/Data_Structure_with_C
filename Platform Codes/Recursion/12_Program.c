/*
 Program 12 : Write a program in C to check if a number is a prime number or not using recursion.
		Test Data :
		Input any positive number : 7
		Expected Output :
			The number 7 is a prime number.
 */

#include<stdio.h>

int prime_Num(int num,int point){
	
	static int count = 0;

	if(num != point - 1){
		
		if(num % point == 0){
			
			count++;
		}
		point++;
		prime_Num(num,point);
	}else{
		
		return count;
	}	
}

void main(){
	
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	int point = 1;
	int count = prime_Num(num,point);

	if(count == 2){
		
		printf("The number %d is prime number.\n",num);
	}else{

		printf("The number %d is Not prime number.\n",num);
	}
}
