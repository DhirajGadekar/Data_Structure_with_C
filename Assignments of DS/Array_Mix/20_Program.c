/*
 Program 20 : Even numbers in a range
	Problem Description
		- You are given an array A of length N and Q queries given by the 2D array B
		  of size Q×2.
		- Each query consists of two integers B[i][0] and B[i][1].
		- For every query, your task is to find the count of even numbers in the
		  range from A[B[i][0]] to A[B[i][1]].
	
	Input Format
		- First argument A is an array of integers.
		- Second argument B is a 2D array of integers.
		  Output Format
		- Return an array of integers.
	
	Example Input
	
		Input 1:
			A = [1, 2, 3, 4, 5]
			B = [ [0, 2]
			      [2, 4]
			      [1, 4] ]
		Input 2:
			A = [2, 1, 8, 3, 9, 6]
			B = [ [0, 3]
			      [3, 5]
			      [1, 3]
			      [2, 4] ]

	Example Output
		Output 1:
			[1, 1, 2]
		Output 2:
			[2, 1, 1, 1]
 */

#include<stdio.h>

int evenRange(int col,int *arr1,int arr2[][col],int Q,int size){
	
	
	for(int i = 0; i < Q; i++){
		int count = 0;
		if(arr2[i][1] > -1 && arr2[i][1] < size){

			for(int j = arr2[i][0]; j <= arr2[i][1]; j++){
			
				if(arr1[j] % 2 == 0){
				
					count++;
				}
			}
		}else{
			
			return -1;
		}
		printf("%d ",count);
	}
	printf("\n");
	return 0;
}

void main(){
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr1[size];

	printf("Enter the array elements : \n");
	for(int i = 0; i < size; i++){
		
		scanf("%d",&arr1[i]);
	}
	
	int Q;
	printf("Enter the number of Queries : ");
	scanf("%d",&Q);
	
	int arr2[Q][2];
	for(int i = 0; i < Q; i++){
		
		printf("Enter the range : \n");
		for(int j = 0; j < 2; j++){
			
			scanf("%d",&arr2[i][j]);
		}
	}
	
	int ret = evenRange(2,arr1,arr2,Q,size);
	if(ret == -1){
		printf("\nQuerie range is not in array Size\n");
	}
}
