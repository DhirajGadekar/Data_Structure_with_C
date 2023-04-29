/*
 Program 7 : Problem Description :
	- You are given a 2D integer matrix A, and return a 1D integer array containing
	  column-wise sums of the original matrix.
	- Return an array containing column-wise sums of the original matrix.
	Input :
		[1,2,3,4]
		[5,6,7,8]
		[9,2,3,4]
	Output :
		{15,10,13,16}

	Example Explanation
		Column 1 = 1+5+9 = 15
		Column 2 = 2+6+2 = 10
		Column 3 = 3+7+3 = 13
		Column 4 = 4+8+4 = 16 
 */

#include<stdio.h>

void columnAddition(int col,int arr[][col],int *arr1,int row){
	
	
	for(int i = 0; i < row; i++){
		int sum = 0;
		for(int j = 0 ; j < col;j++){

			sum = sum + arr[j][i];	
		}
		arr1[i] = sum;
	}
	
}
void main(){
	
	int row,col;
	printf("Enter the Row size :");
	scanf("%d",&row);
	
	printf("Enter the Col Size :");
	scanf("%d",&col);

	int arr[row][col];
	int arr1[col];
	printf("Enter the array elements :");
	for(int i = 0; i < row; i++){
		
		for(int j = 0 ; j < col;j++){

			scanf("%d",&arr[i][j]);
		}
	}
	
	columnAddition(col,arr,arr1,row);

	printf("Column Addition : \n");
	for(int i = 0; i < col;i++){
		
		printf("%d ",arr1[i]);
	}
	printf("\n");
}
