/*
 Program 2 : Given an integer array nums, find the subarray
 	     with the largest sum, and return its sum.

	     Example 1:
		Input: 
			nums = [-2,1,-3,4,-1,2,1,-5,4]
		Output: 6
	     Explanation: 
	     		The subarray [4,-1,2,1] has the largest sum 6.

	     Example 2:
		Input: 
			nums = [1]
		Output: 
			1
	     Explanation: 
	     		The subarray [1] has the largest sum 1.

	     Example 3:
		Input: 
			nums = [5,4,-1,7,8]
		Output: 
			23
		Explanation: 
			The subarray [5,4,-1,7,8] has the largest sum 23.
 
	     Constraints:
			1 <= nums.length <= 105
			-104 <= nums[i] <= 104

 */

#include<stdio.h>

int MaxSum_SubArray(int *arr,int size){
	
	int max1 = -104;
        int max2 = 0;	
	for(int i = 0; i < size; i++){
		
		for(int j = i; j < size; j++){
			
			int sum = 0;		
			for(int k = i; k < j + 1; k++){
				
				sum = sum + arr[k];
				
			}
			max2 = sum;
			if(max1 < max2){
			
				int temp = max1;
				max1 = max2;
				max2 = temp;
			}
		}

	}
	return max1;

}

void main(){
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the array element : ");
	for(int i = 0;i < size; i++){
		
		scanf("%d",&arr[i]);
	}

	int maxSum = MaxSum_SubArray(arr,size);
	printf("Maximum sum of array : %d",maxSum);
}
