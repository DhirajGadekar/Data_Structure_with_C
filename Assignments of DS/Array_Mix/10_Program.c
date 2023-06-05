/*
 Program 10 : 
 	- You are given a N X N integer matrix.
	- You have to find the sum of all the minor diagonal elements of A.
	- Minor diagonal of a M X M matrix A is a collection of elements
	  A[i, j] such that i + j = M + 1 (where i, j are 1-based).
	- Return an integer denoting the sum of minor diagonal elements.
	
	Input 1:
		A = [[1, -2, -3],
		     [-4, 5, -6],
	             [-7, -8, 9]]
	Output 1:
		-5
	
	Input 2:
		A = [[3, 2],
		     [2, 3]]
	Output 2:
		4

	Example Explanation :
		Explanation 1:
			A[1][3] + A[2][2] + A[3][1] = (-3) + 5 + (-7) = -5

		Explanation 2:
			A[1][2] + A[2][1] = 2 + 2 = 4
 */

#include<stdio.h>

int diagonalAddition(int col,int arr[][col],int row){

	int sum = 0;
        for(int i = 0; i < row; i++){

                for(int j = 0 ; j < col;j++){

			if((i + j) == row - 1 ){
				
				sum = sum + arr[i][j];
			}
                }
        }
	return sum;
}
void main(){

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
	printf("Addition of all minor Diagonals : %d\n",sum);

}


