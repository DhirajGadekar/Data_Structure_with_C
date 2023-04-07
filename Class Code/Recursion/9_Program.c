// Recursion in Character array :

#include<stdio.h>
#include<stdbool.h>

int search(char arr[],int N,char ch){
	
	if(arr[N] == ch){
		return 0;
	}
	if(N == 0){
		return -1;
	}
	return search(arr,N-1,ch);
}

void main(){
	
	int size = 5;

	char arr[5] = {'A','B','C','D','E'};
	char ch = 'A';

	bool retval = search(arr,size-1,ch);
	
	if(retval == 0){
		printf("Element is Found\n");
	}else{
		printf("Element is Not Found\n");
	}
}
