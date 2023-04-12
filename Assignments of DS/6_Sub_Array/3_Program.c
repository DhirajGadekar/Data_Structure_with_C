/*
 Problem 3 : Good Subarray
	     Problem Description
		- Given an array of integers A, a subarray of an array is said to be good if
		  it fulfills any one of the criteria:
	     	- Length of the subarray is be even, and the sum of all the elements of the
		  subarray must be less than B.
	     	- Length of the subarray is be odd, and the sum of all the elements of the
		  subarray must be greater than B.
		- Your task is to find the count of good subarrays in A.
		- Return the count of good subarrays in A.

	     Example Input
		Input 1:
			A = [1, 2, 3, 4, 5]
			B = 4
		Output 1:
			6
		Input 2:
			A = [13, 16, 16, 15, 9, 16, 2, 7, 6, 17, 3, 9]
			B = 65
		Output 2:
			36

	     Example Explanation
		Explanation 1:
			- Even length good subarrays = {1, 2}
			- Odd length good subarrays = {1, 2, 3}, {1, 2, 3, 4, 5}, {2, 3, 4}, {3, 4, 5}, {5}
 */

#include<stdio.h>

int Good_SubArray(int *arr, int size, int B){
	
	int count = 0;
	for(int i = 0 ; i < size ; i++){
		
		for(int j = i; j < size; j++){
				
			int length = 0;	
			int sum = 0;
			for(int k = i ; k < j + 1; k++){
			
				sum = sum + arr[k];
				length++;
		
			}
			if((sum < B) && (length % 2 == 0)){
			
				count++;
			}else if((sum > B) && (length % 2 != 0)){
			
				count++;
			}
		}
	}
	return count;
}

void main(){
	
	int size ;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements in array : ");
	for(int i = 0 ; i < size; i++){
		
		scanf("%d",&arr[i]);

	}

	int sum;
	printf("Enter the sum of elements : ");
	scanf("%d",&sum);

	int count = Good_SubArray(arr,size,sum);
	printf("Good Array Count : %d\n",count);
}
