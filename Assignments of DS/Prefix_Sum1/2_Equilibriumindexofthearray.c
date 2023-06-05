/*
 Q2 Equilibrium index of the array
	- You are given an array A of integers of size N.
	- Your task is to find the equilibrium index of the given array
	- The equilibrium index of an array is an index such that the sum of
	  elements at lower indexes are equal to the sum of elements at higher indexes.
	- If there are no elements that are at lower indexes or at higher indexes,
	  then the corresponding sum of elements is considered as 0.
	
	Note:
		Array indexing starts from 0.

	If there is no equilibrium index then return -1.
	If there is more than one equilibrium index then return the minimum index.

	Problem Constraints
		1 <= N <= 105
		-105 <= A[i] <= 105
	
	Input 1:
		A = [-7, 1, 5, 2, -4, 3, 0]
	Output 1:
		3

		A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

	Input 2:
		A = [1, 2, 3]
	Output 2:
	-1
 */

#include<stdio.h>

int equilibriumIndex(int *arr, int size) {
	
	for(int i = 0; i < size; i++) {
		if(i == 0) {
			continue;
		} else {
			
			arr[i] = arr[i] + arr[i - 1];
		}
	}	

	int sum1 = 0;
	int sum2 = 0;
	for(int i = 0; i < size; i++) {
		
		if(i == 0) {
			
			sum1 = 0;
			sum2 = arr[size-1] - arr[i];
		}else if(i == size - 1) {
			
			sum1 = arr[i - 1];
			sum2 = 0;
		}else {
			sum1 = arr[i - 1];
			sum2 = arr[size - 1] - arr[i];
		}
		if(sum1 == sum2) {
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

        printf("Enter the array Elements : ");
        for(int i = 0; i < size; i++) {

                scanf("%d",&arr[i]);
        }
	
	int ret = equilibriumIndex(arr,size);	
	printf("Output = %d\n",ret);
}
