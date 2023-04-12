/*
 Problem 3 :
 */

#include<stdio.h>

int factor(int num){
	
	int count = 0;
	for(int i = 0 ; i < num; i++){
		
		if(num % i == 0){
			count++;
		}
	}
	return count;

}

int Selection_Sort(int *arr,int size){

	for(int i = 0; i < size; i++){
		int min = i;
		for(int j = i + 1; j < size; j++){
			
			if(factor(arr[min]) > factor(arr[j])){
				
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

void main(){
	
	int arr[] = {5,8,3,9,4,10};
	int size = sizeof(arr)/sizeof(arr[0]);

	Selection_Sort(arr,size);
}
