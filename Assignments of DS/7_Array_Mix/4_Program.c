/*
 Program 4 : Problem Description :
	- You are given a constant array A.
	- You are required to return another array which is the reversed form of the
	  input array.
	- Return an integer array.

	Problem Constraints :
		1 <= A.size() <= 10000
		1 <= A[i] <= 10000

	Example Input :

		Input 1:
			A = [1,2,3,2,1]
		Output 1:
			[1,2,3,2,1]
		Input 2:
			A = [1,1,10]
		Output 2:
			[10,1,1]

	Example Explanation :
		Explanation 1:
			- Reversed form of input array is same as original array
		Explanation 2:
			- Reverse of [1,1,10] is [10,1,1]
 */

#include<stdio.h>

void reverseArray(int *arr,int size){
	
	int start = 0;
	int end = size-1;
	while(start < end){
		
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}
}
void main(){
	
	int size;
        printf("Enter the size of array : ");
        scanf("%d",&size);

        int arr[size];

        printf("Enter the array elements : ");
        for(int i = 0 ; i < size; i++){

                scanf("%d",&arr[i]);
        }

        reverseArray(arr,size);
        for(int i = 0 ; i < size; i++){

                printf("%d ",arr[i]);
        }
        printf("\n");
 
}
