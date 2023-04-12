/*
 Program 6 : Given an integer array nums and an integer k, return the number of 
 	     non-empty subarrays that have a sum divisible by k.

	     A subarray is a contiguous part of an array.
	     
	     Example 1:
		Input: 
			nums = [4,5,0,-2,-3,1], 
			k = 5
		Output: 
			7
		Explanation: 
			There are 7 subarrays with a sum divisible by k = 5:
			[4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]

	     Example 2:
		Input: 
			nums = [5], 
			k = 9
		Output: 0
 
	     Constraints:
		1 <= nums.length <= 3 * 104
		-104 <= nums[i] <= 104
		2 <= k <= 104
 */

#include<stdio.h>

int SubArray(int *arr,int size,int target){
	
	int count = 0;
	for(int i = 0 ; i < size; i++){
		
		for(int j = i; j < size; j++){
			int sum = 0;
			for(int k = i ; k < j + 1; k++){
				
				sum = sum + arr[k];
			}
			
			if(sum % target == 0){
				count++;
			}
		}
	}
	return count ;
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

	int target;
	printf("Enter the divisible number : ");
	scanf("%d",&target);

	int output = SubArray(arr,size,target);
	printf("count of sub-array : %d",output);
}
