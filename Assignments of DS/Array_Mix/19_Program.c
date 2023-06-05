/*
 Program 19 : Product Array puzzle
	- Given an array of integers A, find and return the product array of the
	  same size where the ith element of the product array will be equal to the product
	  of all the elements divided by the ith element of the array.
	
	Note: It is always possible to form the product array with integer (32-bit) values.
	      Solve it without using the division operator.

	- Return the product array.
	Input 1:
		A = [1, 2, 3, 4, 5]
	Output 1:
		[120, 60, 40, 30, 24]
	Input 2:
		A = [5, 1, 10, 1]
	Output 2:
		[10, 50, 5, 50]
 */

#include<stdio.h>

void productArray(int *arr, int size) {
	
	int mul = 1;
	for(int i = 0; i < size; i++){
		
		mul = arr[i] * mul;
	}
}

void main() {

	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array elements : ");
	for(int i = 0; i < size; i++) {
		
		scanf("%d",&arr[i]);
	}

	productArray(arr,size);
}
