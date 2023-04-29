/*
 Program 17 : In place prefix sum
	Problem Description
		- Given an array A of N integers.
		- Construct the prefix sum of the array in the given array itself.
		- Return an array of integers denoting the prefix sum of the given array.
	Example Input
		Input 1:
			A = [1, 2, 3, 4, 5]

		Input 2:
			A = [4, 3, 2]
	Example Output
		Output 1:
			[1, 3, 6, 10, 15]
		Output 2:
			[4, 7, 9]

	Example Explanation
		Explanation 1:
			The prefix sum array of [1, 2, 3, 4, 5] is [1, 3, 6, 10, 15].
		Explanation 2:
			The prefix sum array of [4, 3, 2] is [4, 7, 9].
 */

#include<stdio.h>

void prefixSum(int *arr,int size) {


	for(int i = 1; i < size; i++) {
		
		arr[i] = arr[i - 1] + arr[i]; 	
	}

}
void main() {

	int size;

	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array elements : ");
	for(int i = 0 ; i < size; i++) {
		
		scanf("%d",&arr[i]);
	}

	prefixSum(arr,size);

	printf("Prefix Sum : \n");
	for(int i = 0 ; i < size; i++) {
		
		printf("%d ",arr[i]);
	}
	printf("\n");
}
