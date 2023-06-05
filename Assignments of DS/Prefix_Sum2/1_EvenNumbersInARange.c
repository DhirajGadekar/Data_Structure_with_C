/*
 * Q. Even numbers in a range
	 Problem Description
		- You are given an array A of length N and Q queries given by the 2D array B
		  of size Q×2.
		- Each query consists of two integers B[i][0] and B[i][1].
		- For every query, your task is to find the count of even numbers in the
		  range from A[B[i][0]] to A[B[i][1]].

	Problem Constraints
		1 <= N <= 105
		1 <= Q <= 105
		1 <= A[i] <= 109
		0 <= B[i][0] <= B[i][1] < N

	Input Format
		- First argument A is an array of integers.
		- Second argument B is a 2D array of integers.
		  Output Format
		- Return an array of integers.
	
	Input 1:
		A = [1, 2, 3, 4, 5]
		B = [ [0, 2]
		      [2, 4]
		      [1, 4] ]
	Output 1:
		[1, 1, 2]
 */

#include<stdio.h>

void evenNums(int ans[], int B[][2],int row) {
	
	for(int i = 0; i < row; i++) {
		
		int num = (B[i][1] - B[i][0]) + 1;
		if(num % 2 == 0) {

			ans[i] = 2;
		} else {
			
			ans[i] = 1;
		}
	}
}
void main() {
	
	int A[] = {1,2,3,4,5};
	int B[][2] = {{0,2},{2,4},{1,4}};

	int row = sizeof(B) / sizeof(B[0]);
	int ans[row];
	
	evenNums(ans,B,row);
	for(int i = 0; i < row; i++) {
		
		printf("%d ",ans[i]);
	}
	printf("\n");
}
