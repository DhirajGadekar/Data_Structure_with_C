/*
 Q3. Product Array puzzle
	- Given an array of integers A, find and return the product array of the same size
	  where the ith element of the product array will be equal to the product of all the elements
	  divided by the ith element of the array.
	
	Note: It is always possible to form the product array with integer (32-bit) values.
	      Solve it without using the division operator.
	
	- Return the product array.
	
	Constraints
		2 <= length of the array <= 1000
		1 <= A[i] <= 10
	
	Input 1:
		A = [1, 2, 3, 4, 5]
	Output 1:
		[120, 60, 40, 30, 24]
	
	Input 2:
		A = [5, 1, 10, 1]
	Output 2:
		[10, 50, 5, 50]
 */
#include<stdio.h>

void productArrayPuzzle(int *arr, int size) {
	
	int mul1[size];
	int mul2[size];
	for(int i = 0; i < size; i++) {
		
		if(i == 0) {
			
			mul1[i] = arr[i];
		} else {
			
			mul1[i] = mul1[i - 1] * arr[i];
		}
	}
	for(int i = size-1; i >= 0; i--) {
		if(i == size - 1) {
			
			mul2[i] = arr[i];
		} else {
			
			mul2[i] = mul2[i + 1] * arr[i];
		}
	}

	arr[0] = mul2[1];
	arr[size - 1] = mul1[size - 2];

	for(int i = 1; i < size - 1; i++) {
		
		arr[i] = mul2[i + 1] * mul1[i - 1];
	}
}
void main() {
	
	int size;
        printf("Enter the size of array : ");
        scanf("%d",&size);

        int arr[size];

        printf("Enter the array Elements : ");
        for(int i = 0; i < size; i++) {

                scanf("%d",&arr[i]);
        }

	productArrayPuzzle(arr,size);
	for(int i = 0 ; i < size; i++) {
		
		printf("%d ",arr[i]);
	}
	printf("\n");
}
