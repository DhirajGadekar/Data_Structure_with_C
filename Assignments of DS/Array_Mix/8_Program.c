/*
 Program 8 : Problem Description :
	- You are given a 2D integer matrix A, and return a 1D integer array containing
	  row-wise sums of the original matrix.
	- Return an array containing row-wise sums of the original matrix.

	Input 1:
		[1,2,3,4]
		[5,6,7,8]
		[9,2,3,4]
	Output 1:
		[10,26,18]
	Explanation :
		Row 1 = 1+2+3+4 = 10
		Row 2 = 5+6+7+8 = 26
		Row 3 = 9+2+3+4 = 18
 */

#include<stdio.h>

void RowAddition(int col,int arr1[][col],int *arr2,int row){

        for(int i = 0; i < row; i++){
		int sum = 0;
                for(int j = 0 ; j < col;j++){

			sum = sum + arr1[i][j];
                }
		arr2[i] = sum;
        }

}
void main(){

        int row,col;
        printf("Enter the Row size :");
        scanf("%d",&row);

        printf("Enter the Col Size :");
        scanf("%d",&col);

        int arr1[row][col];
	int arr2[row];
        printf("Enter the array elements :");
        for(int i = 0; i < row; i++){

                for(int j = 0 ; j < col;j++){

                        scanf("%d",&arr1[i][j]);
                }
        }

	RowAddition(col,arr1,arr2,row);
        for(int i = 0; i < row; i++){

                printf("%d ",arr2[i]);
        }
	printf("\n");

}

