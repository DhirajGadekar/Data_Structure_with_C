/*
 Program 14 : Problem Description :
	- You are given two matrices A & B of equal dimensions and you have to
	  check whether the two matrices are equal or not.
	- Return 1 if both matrices are equal or return 0.

	NOTE: Both matrices are equal if A[i][j] == B[i][j] for all i and j
	      in the given range.

	Example Input :
	Input 1:
		A = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
		B = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
	Output 1:
		1
	Input 2:
		A = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
		B = [[1, 2, 3],[7, 8, 9],[4, 5, 6]]
	Output 2:
		0

	Example Explanation:
		Explanation 1:
			- All the elements of both matrices are equal at respective positions.
		Explanation 2:
			- All the elements of both matrices are not equal at their respective positions.
 */


#include<stdio.h>

int matrixComp(int col,int arr1[][col],int arr2[][col],int row){
	
	for(int i = 0 ; i < row; i++){
		
		for(int j = 0; j < col; j++){

			if(arr1[i][j] != arr2[i][j]){

				return 0; 
			}
		}
	}

	return 1;
}

void main(){
	
	int row,col;

	printf("Enter the row : ");
	scanf("%d",&row); 
	
	printf("Enter the col : ");
	scanf("%d",&col);

	int arr1[row][col];	
	int arr2[row][col];	

	printf("Enter the elements in 1st Array :\n");
	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < col; j++){

			scanf("%d",&arr1[i][j]);
		}
	}


	printf("Enter the elements in 2nd Array :\n");
	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < col; j++){

			scanf("%d",&arr2[i][j]);
		}
	}
	
	int ret = matrixComp(col,arr1,arr2,row);
	if(ret == 0){
		
		printf("Array are Not Equal\n");
	}else{

		printf("Array are Equal\n");
	}
}






















