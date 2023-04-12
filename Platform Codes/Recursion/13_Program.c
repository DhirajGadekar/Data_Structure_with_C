/*
 Program 13 : Write a program in C to find the LCM of two numbers using recursion. 
		Test Data :
		Input 1st number for LCM : 4
		Input 2nd number for LCM : 6
		Expected Output :
			The LCM of 4 and 6 :  12 
 */

#include<stdio.h>

int LCM_num(int num1, int num2){
	
	static int point = 1;
	static int com = 0;

	if(num1 != point - 1 && num2 != point - 1){
		
		if(num1 % point == 0 && num2 % point == 0){
			
			com = point;
		}
		point++;
		LCM_num(num1,num2);
	}else{

		int LCM = (num1 * num2) / com;
		return LCM;
	}

}
void main(){
	
	int num1,num2;

	printf("Enter 1st number for LCM : ");
	scanf("%d",&num1);

	printf("Enter 2nd number for LCM : ");
	scanf("%d",&num2);

	int LCM = LCM_num(num1,num2);
	printf("The LCM of %d and %d : %d\n",num1,num2,LCM);
}
