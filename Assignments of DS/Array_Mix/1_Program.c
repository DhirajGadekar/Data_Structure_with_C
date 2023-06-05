/*
Problem Description:
- Given an array A of N integers.
- Count the number of elements that have at least 1 element greater than
itself.
Example Input
Input 1:
A = [3, 1, 2]
Output:
2
Explanation:
- The elements that have at least 1 element greater than itself are 1 and 2
Input 2:
A = [5, 5, 3]
Output:
1
Explanation:
- The element that has at least 1 element greater than itself is
*/

#include<stdio.h>

int maxElements(int *arr,int size){
	
	int max = arr[0];
	int count = 0;
	for(int i = 1 ; i < size;i++){
		
		if(max  < arr[i]){
			max = arr[i];
		}
		
	}
	for(int i = 0 ; i < size; i++){

		if(max == arr[i]){
			
			count++;
		}
	}
	return size - count;
	
}
void main(){
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the array elememts : ");
	for(int i = 0 ; i < size; i++){
		
		scanf("%d",&arr[i]);
	}
	 
	int count = maxElements(arr,size);
	printf("Count = %d\n",count);
}
