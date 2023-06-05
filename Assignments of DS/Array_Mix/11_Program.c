/*
 Program 11 : Problem Description :
	- Give an N * N square matrix A, and return an array of its anti-diagonals.
	- Return a 2D integer array of size (2 * N-1) * N, representing the
	  anti-diagonals of input array A.
	- The vacant spaces in the grid should be assigned to 0.

	Example Input
		Input 1:
			1 2 3
			4 5 6
			7 8 9
		Output 1:
			1 0 0
			2 4 0
			3 5 7
			6 8 0
			9 0 0

		Input 2:
			1 2
			3 4
		Output 2:
			1 0
			2 3
			4 0

	Example Explanation :
	For input 1:
		- The first anti-diagonal of the matrix is [1 ], the rest spaces should be
		  filled with 0 making the row [1, 0, 0].
		- The second anti-diagonal of the matrix is [2, 4 ], the rest spaces should
		  be filled with 0 making the row [2, 4, 0].
		- The third anti-diagonal of the matrix is [3, 5, 7 ], the rest spaces

		  should be filled with 0 making the row [3, 5, 7].
		- The fourth anti-diagonal of the matrix is [6, 8 ], the rest spaces should
		  be filled with 0 making the row [6, 8, 0].
		- The fifth anti-diagonal of the matrix is [9 ], the rest spaces should be
		  filled with 0 making the row [9, 0, 0].

	For input 2:
		- The first anti-diagonal of the matrix is [1 ], the rest spaces should be
		  filled with 0 making the row [1, 0, 0].
		- The second anti-diagonal of the matrix is [2, 4 ], the rest spaces should
		  be filled with 0 making the row [2, 4, 0].
		- The third anti-diagonal of the matrix is [3, 0, 0 ], the rest spaces
		  should be filled with 0 making the row [3, 0, 0].
 */

#include<stdio.h>

void antiAddition(int col,int arr[][col],int arr1[][col],int row1,int row) {
	
	for(int k = 0; k < row1; k++){
		int itr = 0;
		for(int i = 0; i < row; i++){
			
			for(int j = 0; j < col; j++){

				if((i + j) == k){

					arr1[k][itr] = arr[i][j];
					itr++;
				}
			}

		}
		
	}
}
void main(){

        int row,col;
        printf("Enter the Row size :");
        scanf("%d",&row);

        printf("Enter the Col Size :");
        scanf("%d",&col);
	
	int row1 = (row + col) - 1;
        int arr[row][col];
	int arr1[row1][col];

        printf("Enter the array elements :");
        for(int i = 0; i < row; i++){

                for(int j = 0 ; j < col;j++){

                        scanf("%d",&arr[i][j]);
			arr1[i][j] = 0;
                }
        }
	
	antiAddition(col,arr,arr1,row1,row);
	printf("Anti Diagonal : \n");
        for(int i = 0; i < row1; i++){

                for(int j = 0 ; j < col;j++){

                        printf("%d ",arr1[i][j]);
			
                }
		printf("\n");
	}
}


