/*
 Program 2 : Counting Subarrays
	     Problem Description
		- Given an array A of N non-negative numbers and a non-negative number B,
		  you need to find the number of subarrays in A with a sum less than B.
		- Return an integer denoting the number of subarrays in A having sum less
		  than B.
	     Problem Constraints
		1 <= N <= 103
		1 <= A[i] <= 1000
		1 <= B <= 107
	     Example Input
		Input 1:
			A = [2, 5, 6]
			B = 10
		Output 1:
			4
		Input 2:
			A = [1, 11, 2, 3, 15]
			B = 10
		Output 2:
			4

	      Example Explanation
		Explanation 1:
			- The subarrays with sum less than B are {2}, {5}, {6} and {2, 5},
		Explanation 2:
			- The subarrays with sum less than B are {1}, {2}, {3} and {2, 3}
 */

#include<stdio.h>

int count_Sub_array(int *Arr,int size,int sum){
	
	int count = 0;
	for(int i = 0; i < size; i++){
		
		for(int j = i; j < size; j++){
			int sum1 = 0;
			for(int k = i; k < j + 1; k++){
				
				sum1 = sum1 + Arr[k]; 
			}
			if(sum1 < sum){
				
				count++;
			}
		}	
	}
	
	return count;
}

void main(){
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array Elements : ");
	for(int i = 0 ; i < size; i++){
	
		scanf("%d",&arr[i]);
	}

	int sum;
	printf("Enter the sum of element : ");
	scanf("%d",&sum);

	int count = count_Sub_array(arr,size,sum);
	printf("Sub-array count : %d\n",count);
}
