/*
 Program 12 : Problem Description :
	- You are given a matrix A, and you have to return another matrix which is the
	  transpose of A.
	- You have to return the Transpose of this 2D matrix.
	
	NOTE: Transpose of a matrix A is defined as - AT[i][j] = A[j][i] ; Where 1 ≤ i ≤ col
	      and 1 ≤ j ≤ row. The transpose of a matrix switches the element at (i, j)th index to (j, i)th
	      index, and the element at (j, i)th index to (i, j)th index.
       
	Input :
		A = [[1, 2, 3]
		     [4, 5, 6]
		     [7, 8, 9]]
	Output :
		[[1, 4, 7]
		 [2, 5, 8]
		 [3, 6, 9]]
	
	Explanation :
		- after converting rows to columns and columns to rows of
		  [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
		  we will get [[1, 4, 7], [2, 5, 8], [3, 6, 9]].
 */

#include<stdio.h>

void transposeArray(int col,int arr[][col],int arr1[][col],int row){
	
	for(int i = 0 ; i < row; i++){
		
		for(int j = 0; j < col; j++){
			
			arr1[i][j] = arr[j][i];
		}
	}
}

void main(){

	int row,col;
	
	printf("Enter the row : ");
	scanf("%d",&row);
	
	printf("Enter the col : ");
	scanf("%d",&col);

	int arr[row][col];

	printf("Enter the array Elements : ");
	for(int i = 0; i < row; i++){
		
		for(int j = 0 ; j < col;j++){
				
			scanf("%d",&arr[i][j]);
		}
	}
	int arr1[row][col];
	transposeArray(col,arr,arr1,row);

	printf("Transpose Array : \n");
	for(int i = 0; i < row; i++){
		
		for(int j = 0 ; j < col;j++){
				
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}

}
