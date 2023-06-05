/*
 Problem Description :
- Given an array A and an integer B.
- A pair(i, j) in the array is a good pair if i != j and (A[i] + A[j] == B).
- Check if any good pair exist or not.
- Return 1 if good pair exist otherwise return 0.

Example Input
Input 1:
A = [1,2,3,4]
B = 7
Output 1:
1

Input 2:
A = [1,2,4]
B = 4
Output 2:
0
Input 3:
A = [1,2,2]
B = 4
Output 3:
1

Example Explanation :
Explanation 1:
(i,j) = (3,4)
Explanation 2:
No pair has a sum equal to 4.
Explanation 3:
(i,j) = (2,3)
 */

#include<stdio.h>

int goodPair(int *arr,int size,int target) {
	
	
	for(int i = 1; i < size;i++){
		
		arr[i] = arr[i] + arr[i - 1];	
		
	}
	int num = 0;
	for(int i = 1; i < size;i++){
		
		if(i == 1){
			
			num = arr[i];
		}else{
			
			num = arr[i] - arr[i - 2];
		}
		if(num == target){
			
			return 1;
		}
	}
	return 0;
}
void main(){
	
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the array elements : ");
	for(int i = 0 ;i < size;i++){
		
		scanf("%d",&arr[i]);
	}

	int target;
	printf("Enter the target : ");
	scanf("%d",&target);

	int ret = goodPair(arr,size,target);
	if(ret == 1){
		
		printf("Good Pair\n");
	}else{

		printf("Not Good Pair\n");
	}
}
