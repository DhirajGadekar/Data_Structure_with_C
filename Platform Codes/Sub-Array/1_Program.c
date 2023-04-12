/*
 Program 1 : Given an integer array nums and an integer k, return true if nums has a good subarray or false otherwise.

	A good subarray is a subarray where:
		its length is at least two, and
		the sum of the elements of the subarray is a multiple of k.

	Note that:
		A subarray is a contiguous part of the array.
		An integer x is a multiple of k if there exists an integer n such that x = n * k. 0 is always a multiple of k.
 
	Example 1:
		Input: 
			nums = [23,2,4,6,7], 
			k = 6
		Output: 
			true
		Explanation: 
			[2, 4] is a continuous subarray of size 2 whose elements sum up to 6.
	Example 2:

		Input: 
			nums = [23,2,6,4,7], 
			k = 6
		Output: 
			true
		Explanation: 
			[23, 2, 6, 4, 7] is an continuous subarray of size 5 whose elements sum up to 42.
			42 is a multiple of 6 because 42 = 7 * 6 and 7 is an integer.
	Example 3:

		Input: 
			nums = [23,2,6,4,7], 
			k = 13
		Output: 
			false
 
	Constraints:

		1 <= nums.length <= 105
		0 <= nums[i] <= 109
		0 <= sum(nums[i]) <= 231 - 1
		1 <= k <= 231 - 1
 */


#include<stdio.h>
#include<stdbool.h>

bool Good_SubArray(int *arr,int size,int k){

	int flag = 0;
	for(int i = 0 ; i < size; i++){
		
		for(int  j = i; j < size; j++){
			int sum = 0,length = 0;
			for(int k = i; k < j + 1; k++){
				
				sum = sum + arr[k];
				length++;
			}
	
			if(sum == k && length == 2 && sum % k == 0){
				
				flag = 1;
			}

		}
	}
	if(flag == 1){
		return true;
	}else{
		return false;
	}
}

void main(){
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array  elements : ");
	for(int i = 0 ; i < size; i++){
		
		scanf("%d",&arr[i]);
	}

	int sum;
	printf("Enter the sum of array : ");
	scanf("%d",&sum);

	bool output = Good_SubArray(arr,size,sum);
	if(output == true){
		
		printf("true\n");
	}else{

		printf("false\n");
	}
	
}
