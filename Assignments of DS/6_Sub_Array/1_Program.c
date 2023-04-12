/*
 Program 1 : Sum of All Subarrays
	     Problem Description
		- You are given an integer array A of length N.
		- You have to find the sum of all subarray sums of A.
		- Return a single integer denoting the sum of all subarray sums of the given array.

	     Example Input
		Input 1:
			A = [1, 2, 3]
		Output 1:
			20
		Input 2:
			A = [2, 1, 3]
		Output 2:
			19

	     Example Explanation
	     Explanation 1:
		- The different subarrays for the given array are:
		[1], [2], [3], [1, 2], [2, 3], [1, 2, 3].
		- Their sums are: 1 + 2 + 3 + 3 + 5 + 6 = 20
	     Explanation 2:
		- Similiar to the first example, the sum of all subarray sums for this array is 19.
 */

#include<stdio.h>

int Sum_Sub_Array(int *arr, int size){
	
	int sum = 0;
	for(int i = 0; i < size;i++){
		
		for(int j = i; j < size; j++){
			
			for(int k = i; k < j + 1; k++){
				
				sum = sum + arr[k];
			}
		}

	}
	
	return sum;
}

void main(){

	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements in array : ");
	for(int i = 0; i < size; i++){
		
		scanf("%d",&arr[i]);
	}

	int sum = Sum_Sub_Array(arr,size);
	printf("Sum of all Sub-array element : %d\n",sum);
}
