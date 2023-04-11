/*
 Problem 1 : Insertion Sort
 */

#include<stdio.h>

int Insertion_Sort(int *arr,int size){
	
	for(int i = 1; i < size; i++){
		int val = arr[i];
		int j = i - 1;
		
		while((arr[j] > val) && j >= 0){
			
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = val;

	}

}

void main(){

	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the Elements in Array : ");
	for(int i = 0; i < size; i++){
		
		scanf("%d", &arr[i]);
	}
	
	Insertion_Sort(arr,size);

	printf("After Sorting Array :\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n",arr[i]);
	}
}
