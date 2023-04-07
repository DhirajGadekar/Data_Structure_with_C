/*
 Recursion in Array :

 sumArray(arr,N) = arr[0] + arr[1] + .......+arr[N-2] + arr[N-1]
	
 sumArray(arr,N-1) + arr[N - 1]

 */

#include<stdio.h>

int sumArray(int arr[],int N){

	if(N == 0){
		return 0;
	}

	return sumArray(arr,N-1) + arr[N - 1];
}

void main(){
	
	int size = 5;
	int arr[5] = {1,2,3,4,5};

	int retval = sumArray(arr,size);

	printf("Sum = %d\n",retval);
}

