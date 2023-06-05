/*
 Q2. Range Sum Query
	Problem Description
		- You are given an integer array A of length N.
		- You are also given a 2D integer array B with dimensions M x 2, where each
		  row denotes a [L, R] query.
		- For each query, you have to find the sum of all elements from L to R
		  indices in A (0 - indexed).
		- More formally, find A[L] + A[L + 1] + A[L + 2] +... + A[R - 1] + A[R] for
		  each query.
	
	Problem Constraints
		1 <= N, M <= 105
		1 <= A[i] <= 109
		0 <= L <= R < N
	Input Format
		- The first argument is the integer array A.
		- The second argument is the 2D integer array B.

	Output Format
		- Return an integer array of length M where the ith element is the answer for
		  ith query in B.
	Example Input
	Input 1:
		A = [1, 2, 3, 4, 5]
		B = [[0, 3], [1, 2]]
	Output 1:
		[10, 5]
 */

#include<stdio.h>

void evenNums(int size,int *A,int ans[], int B[][2],int row) {

	for(int i = 1; i < size; i++) {
		
		A[i] = A[i] + A[i - 1];
	}
	
        for(int i = 0; i < row; i++) {

                if(B[i][0] == 0) {
			
			ans[i] = A[B[i][1]];
		} else {
			
			ans[i] = A[B[i][1]] - A[B[i][0] - 1];
		}
        }
}
void main() {

        int A[] = {1,2,3,4,5};
        int B[][2] = {{0,3},{1,2}};
	
	int size = sizeof(A) / sizeof(A[0]);
        int row = sizeof(B) / sizeof(B[0]);
        int ans[row];

        evenNums(size,A,ans,B,row);
        for(int i = 0; i < row; i++) {

                printf("%d ",ans[i]);
        }
        printf("\n");
}

