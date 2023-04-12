/*
 Problem 3 :  Write a program in C to print the Fibonacci Series using recursion. `
		Test Data :
			Input number of terms for the Series (< 20) : 10
		Expected Output:
 			Input number of terms for the Series (< 20) : 10                                
	 	The Series are :                                                                
 			0  1  1  2  3  5  8  13  21  34
 */

#include<stdio.h>

int fibonacii_Series(int num,int a1,int a2,int sum){
	
	if(num != 0){
		
		printf("%d ",a1);
		sum = a1 + a2;
		a1 = a2;
		a2 = sum;

		fibonacii_Series(--num,a1,a2,sum);
	}
	return 0;

}

void main(){
	
	int num;
	printf("Input number of terms for the Series (< 20) : ");
	scanf("%d",&num);
	int a1 = 0,a2 = 1,sum = 0;
	fibonacii_Series(num,a1,a2,sum);
}
