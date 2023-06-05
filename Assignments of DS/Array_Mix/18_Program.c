/*
 Program 18 : Equilibrium index of the array
	Problem Description
		- You are given an array A of integers of size N.
		- Your task is to find the equilibrium index of the given array
		- The equilibrium index of an array is an index such that the sum of
		  elements at lower indexes is equal to the sum of elements at higher indexes.
		- If there are no elements that are at lower indexes or at higher indexes,
		  then the corresponding sum of elements is considered as 0.
	Note:
		Array indexing starts from 0.
		If there is no equilibrium index then return -1.
		If there is more than one equilibrium index then return the minimum index.

	Example Input
		Input 1:
			A = [-7, 1, 5, 2, -4, 3, 0]
		Input 2:
			A = [1, 2, 3]

	Example Output
		Output 1:
			3
		Output 2:
			-1

	Example Explanation
		Explanation 1:
			i Sum of elements at lower indexes Sum of elements at higher indexes
			0  0  7
			1 -7  6
			2 -6  1
			3 -1 -1
			4  1  3
			5 -3  0
			6  0  0
		       - 3 is an equilibrium index because
			A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

		Explanation 2:
			i Sum of elements at lower indexes Sum of elements at higher indexes
			0 0 5
			1 1 3
			2 3 0
Thus, there is no such index.
 */

#include<stdio.h>

int equilibriumIndex(int *arr,int size) {
	
	for(int i = 1; i < size; i++){
		
		arr[i] = arr[i - 1] + arr[i];
	} 

	for(int i = 1; i < size; i++){
		
		int sum = arr[size - 1] - arr[i];
		if(arr[i - 1] == sum){
			
			return i;
		}
		
	}
	return -1;
}

void main() {
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array elements : \n");
	for(int i = 0; i < size; i++){
		
		scanf("%d",&arr[i]);
	}
	int ret = equilibriumIndex(arr,size);
	if(ret == -1){
		
		printf("Not an Equilibrium Array Index\n");
	}else{

		printf("Equilibrium Array Index : %d\n",ret);
	}
}
