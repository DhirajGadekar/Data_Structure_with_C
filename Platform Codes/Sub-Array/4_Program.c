/*
 Program 4 : Given an array of positive integers nums and a positive integer target, 
 	     return the minimal length of a subarray
	     whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

	     Example 1:
		Input: 
			target = 7, 
			nums = [2,3,1,2,4,3]
		Output: 	
			2
			Explanation: 
				The subarray [4,3] has the minimal length under the problem constraint.
		
		Example 2:
			Input: 
				target = 4, 
				nums = [1,4,4]
			Output: 
				1
		Example 3:
			Input: 
				target = 11, 
				nums = [1,1,1,1,1,1,1,1]
			Output: 
				0

		Constraints:
			1 <= target <= 109
			1 <= nums.length <= 105
			1 <= nums[i] <= 104
 */

#include<stdio.h>

int Sub_Array(int *arr,int size,int target){
	
	int len = 0;
	for(int i = 0; i < size; i++){
		
		for(int j = i ; j < size; j++){
			
			int sum = 0;
			int length = 0;
			for(int k = i; k < j + 1; k++){
			
				sum = sum + arr[k];
				length++;
			}
			if(target == sum){
				len = length;		
			}
		}
	}
	return len;
}

void main(){
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array elements in array : ");
	for(int i = 0; i < size; i++){
		
		scanf("%d",&arr[i]);
	}

	int target;
	printf("Enter the target : ");
	scanf("%d",&target);

	int output = Sub_Array(arr,size,target);
	printf("The subArray Mininmum : %d\n",output);
}
