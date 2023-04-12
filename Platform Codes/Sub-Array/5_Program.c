/*
 Program 5 : Given an array of integers arr, find the sum of min(b), where b ranges over 
 	     every (contiguous) subarray of arr. Since the answer may be large, return the 
	     answer modulo 109 + 7.

	     Example 1:
		Input: 
			arr = [3,1,2,4]
		Output: 
			17
		Explanation: 
			Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
			Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
			Sum is 17.
		
		Example 2:
		Input: 
			arr = [11,81,94,43,3]
		Output: 
			444
 
		Constraints:
			1 <= arr.length <= 3 * 104
			1 <= arr[i] <= 3 * 104
 */

#include<stdio.h>

int SubArray(int *arr, int size){
		
	int sum = 0;
	for(int i = 0; i < size; i++){
		
		for(int j = i ;j < size; j++){
			
			int min = arr[i];
			for(int k = i + 1 ; k < j + 1 ; k++){
				
				if(min > arr[k]){
					
					min = arr[k];
				}
			}
			printf("min = %d\n",min);
			sum = sum + min;
		}
	}
	return sum;
}

void main(){

	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array elements : ");
	for(int i = 0; i < size; i++){
		
		scanf("%d",&arr[i]);
	}

	int sum = SubArray(arr,size);
	printf("Sum of minimum element in subarray : %d\n",sum);
}
