/*
 Program 14 : Write a program in C to print even or odd numbers in a given range using recursion. 
		Test Data :
			Input the range to print starting from 1 : 10
		Expected Output :
			All even numbers from 1 to 10 are : 2  4  6  8  10                              
			All odd numbers from 1 to 10 are : 1  3  5  7  9   
 */

#include<stdio.h>

int Odd_Even(int num,int *arr1,int *arr2){
	
	static int point = 1;
	static int Index1 = 0;
	static int Index2 = 0;
	if(point - 1 != num){
		
		if(point % 2 == 0){

			arr1[Index1] = point;
			Index1++;
		}else{
			
			arr2[Index2] = point;
			Index2++;
		}
		point++;
		Odd_Even(num,arr1,arr2);
	}
	return 0;
}

void main(){
	
	int num;

	printf("Enter the range to print starting from 1 : ");
	scanf("%d",&num);

	int arr1[num];
	int arr2[num];
	
	Odd_Even(num,arr1,arr2);
	
	printf("All even numbers from 1 to 10 are : ");
	for(int i = 0; i < num/2; i++){
		
		printf("%d ",arr1[i]);
	}
	printf("\n");
	printf("All odd numbers from 1 to 10 are : ");
	for(int i = 0; i < num/2; i++){
		
		printf("%d ",arr2[i]);
	}
	printf("\n");
}
