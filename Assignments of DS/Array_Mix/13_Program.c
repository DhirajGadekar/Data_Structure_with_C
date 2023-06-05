/*
 Program 13 : Problem Description :
	- You are given a n x n 2D matrix A representing an image.
	- Rotate the image by 90 degrees (clockwise).
	- You need to do this in place.
	
	Note: If you end up using an additional array, you will only receive
	      a partial score.

	Example Input :
		Input 1:
			[[1, 2],[3, 4]]
		Output 1:
			[[3, 1],[4, 2]]

		Input 2:
			[[1]]

		Output 2:
			[[1]]

	Example Explanation :
		Explanation 1:
			- After rotating the matrix by 90 degrees:
			- 1 goes to 2, 2 goes to 4
			- 4 goes to 3, 3 goes to 1
		Explanation 2:
			- 2D array remains the same as there is the only one element.
 */

#include<stdio.h>

void rotateArray(int col,int arr[][col],int arr1[][col],int row){
	
	for(int i = 0 ; i < row; i++){
		int itr = col - 1;
		for(int j = 0 ; j < col; j++){
			
			arr1[i][j] = arr[itr][i];
			itr--;
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
	int arr1[row][col];
	printf("Enter the array elements :");
	for(int i = 0 ; i < row; i++){
		
		for(int j = 0 ; j < col; j++){
			
			scanf("%d",&arr[i][j]);
		}
	}
	
	rotateArray(col,arr,arr1,row);

	printf("90 Degree Rotate Array : \n");
	for(int i = 0 ; i < row; i++){
		
		for(int j = 0 ; j < col; j++){
			
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

