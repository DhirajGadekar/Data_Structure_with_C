/*
 Program 3 : Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
	     A subarray is a contiguous non-empty sequence of elements within an array.

	     Example 1:
		Input: 
			nums = [1,1,1], 
			k = 2
		Output: 
			2
	     Example 2:
		Input: 
			nums = [1,2,3], 
			k = 3
		Output: 
			2
 
	     Constraints:
			1 <= nums.length <= 2 * 104
			-1000 <= nums[i] <= 1000
			-107 <= k <= 107
*/

#include<stdio.h>

int 
void main(){
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements in array : ");
	for(int i = 0; i < size; i++){
		
		scanf("%d",&arr[i]);
	}

	int p ;
	printf("Enter the ");
	int output = SumDiv_SubArray();
}
