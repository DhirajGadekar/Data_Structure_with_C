/*
 Problem 4 : Write a program in C to print the array elements using recursion. 
		Test Data :
			Input the number of elements to be stored in the array :6
		Input 6 elements in the array :
			element - 0 : 2
			element - 1 : 4
			element - 2 : 6
			element - 3 : 8
			element - 4 : 10
			element - 5 : 12
		Expected Output :
			The elements in the array are : 2  4  6  8  10  12 
 */

#include<stdio.h>

int print_arr_ele(int *arr,int Ind,int size){
	
	if(size != Ind){
		
		printf("element - %d : %d\n",Ind,arr[Ind]);
		print_arr_ele(arr,++Ind,size);
	}
	return 0;
}
void main(){

	int size;
	printf("Enter the Size of array : ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter the array Elements : \n");
	for(int i = 0; i < size;i++){
		
		scanf("%d",&arr[i]);

	}
	
	int Ind = 0;
	printf("Elements in the array : \n");
	print_arr_ele(arr,Ind,size);
}
