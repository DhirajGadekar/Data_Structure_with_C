/*
 Program 21 : Range Sum Query
	Problem Description
	- You are given an integer array A of length N.
	- You are also given a 2D integer array B with dimensions M x 2, where each
	  row denotes a [L, R] query.
	- For each query, you have to find the sum of all elements from L to R
	  indices in A (0 - indexed).
	- More formally, find A[L] + A[L + 1] + A[L + 2] +... + A[R - 1] + A[R] for
	  each query.

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
		Input 2:
			A = [2, 2, 2]
			B = [[0, 0], [1, 2]]

	Example Output
		Output 1:
			[10, 5]
		Output 2:
			[2, 4]

	Example Explanation
		Explanation 1:
			- The sum of all elements of A[0 ... 3] = 1 + 2 + 3 + 4 = 10.
			- The sum of all elements of A[1 ... 2] = 2 + 3 = 5.
		Explanation 2:
			- The sum of all elements of A[0 ... 0] = 2 = 2.
			- The sum of all elements of A[1 ... 2] = 2 + 2 = 4.
 */

#include<stdio.h>

int sumInRange(int col,int *arr1,int arr2[][col],int Q,int size) {
	
	int arr3[Q];
	int itr = 0;

	for(int i = 1; i < size; i++) {
		
		arr1[i] = arr1[i - 1] + arr1[i];
	}
        for(int i = 0; i < Q; i++) {
               
                if(arr2[i][0] > -1 && arr2[i][1] < size){
			
			if(arr2[i][0] == 0) {	
				
				arr3[itr] = arr1[arr2[i][1]];
			}else {
				
				arr3[itr] = arr1[arr2[i][1]] - arr1[arr2[i][0] - 1];	
			}
			itr++;
		}	
        }
    	
	printf("Sum All ");
	for(int i = 0; i < Q; i++){
			
		printf("%d ",arr3[i]);
	}
	printf("\n");
        return 0;
}

void main(){

        int size;
        printf("Enter the size of array : ");
        scanf("%d",&size);

        int arr1[size];

        printf("Enter the array elements : \n");
        for(int i = 0; i < size; i++){

                scanf("%d",&arr1[i]);
        }

        int Q;
        printf("Enter the number of Queries : ");
        scanf("%d",&Q);

        int arr2[Q][2];
        for(int i = 0; i < Q; i++){

                printf("Enter the range : \n");
                for(int j = 0; j < 2; j++){

                        scanf("%d",&arr2[i][j]);
                }
        }

        int ret = sumInRange(2,arr1,arr2,Q,size);
        if(ret == -1){
                printf("\nQuerie range is not in array Size\n");
        }
}

