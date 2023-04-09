/*
 Program 7 : Write a program in C to find the GCD of two numbers using recursion. 
		Test Data :
			Input 1st number: 10
			Input 2nd number: 50
		Expected Output :
			The GCD of 10 and 50 is: 10 
 */

#include<stdio.h>

int GCD_Fun(int num1,int num2,int point){
	
	static int com = 0;
	if(num1 != point-1 && num2 != point-1){
		
		if(num1 % point == 0 && num2 % point == 0){
	
			com = point;
		}
	
		GCD_Fun(num1,num2,++point);

	}else{

		return com;
	}
}

void main(){
	
	int num1,num2;
	printf("Enter the 1st Number : ");
	scanf("%d",&num1);
	
	printf("Enter the 1st Number : ");
	scanf("%d",&num2);

	int point = 1;
	int GCD = GCD_Fun(num1,num2,point);
	printf("The GDC of %d of %d is : %d\n",num1,num2,GCD);
}
