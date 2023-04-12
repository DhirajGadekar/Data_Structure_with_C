/*
 Program 2 : Write a program in C to calculate the sum of numbers from 1 to n using recursion. 
	
 	Test Data :
		Input the last number of the range starting from 1 : 5
	Expected Output:
		The sum of numbers from 1 to 5 : 15
 */

#include<stdio.h>

int Sum_Num(int num,int sum){
		
	if(num != 0){
		
		sum = sum + num;
		Sum_Num(--num,sum);
	}else{
		return sum;
	}
}
void main(){
	
	int num;
	printf("Input the last number of the range starting from 1 : ");
	scanf("%d",&num);
	int sum = 0;
	int Sum1 = Sum_Num(num,sum);
	printf("The sum of numbers from 1 to %d : %d\n",num,Sum1);
}
