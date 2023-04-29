/*
 Program 9 : Problem Description :
	- You are given a N X N integer matrix.
	- You have to find the sum of all the main diagonal elements of A.
	- The main diagonal of a matrix A is a collection of elements A[i, j]
	  such that i = j.
	- Return an integer denoting the sum of main diagonal elements.

	Input 1:
		3 3 1 -2 -3 -4 5 -6 -7 -8 9
	Output 1:
		15

	Input 2:
		2 2 3 2 2 3
	Output 2:
		6
	
	Example Explanation :
		Explanation 1:
			A[1][1] + A[2][2] + A[3][3] = 1 + 5 + 9 = 15
		Explanation 2:
			A[1][1] + A[2][2] = 3 + 3 = 6
 */

#include<stdio.h>

int diagonalAddition(int col,int arr[][col],int row) {

	int sum = 0;
        for(int i = 0; i < row; i++){

                for(int j = 0 ; j < col;j++){

			if(i == j){
				
				sum = sum + arr[i][j];
			}
                }
        }
	
	return sum;
}
void main() {

        int row,col;
        printf("Enter the Row size :");
        scanf("%d",&row);

        printf("Enter the Col Size :");
        scanf("%d",&col);

        int arr[row][col];

        printf("Enter the array elements :");
        for(int i = 0; i < row; i++){

                for(int j = 0 ; j < col;j++){

                        scanf("%d",&arr[i][j]);
                }
        }


	int sum = diagonalAddition(col,arr,row);
	printf("Addition of all Main Diagonal : %d\n",sum);
}

