
//Count of max elements : 

#include<stdio.h>

int MaxEleCount(int *arr,int size){
	
	int count = 0;
	/*
	Approach 1 :
	for(int i = 0 ; i < size; i++){
		
		int max = arr[i];
		for(int j = 0 ; j < size;j++){
			
			if(max < arr[j]){
				count++;
				break;
			}
		}
	}*/

	//Aprroach 2 :
	int max = arr[0];
	for(int i = 0; i < size; i++){
		
		if(max < arr[i]){
			max = arr[i];
		}
	}
	for(int i = 0; i < size; i++){
		
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
	printf("Enter the array elements : ");
	for(int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}

	int count = MaxEleCount(arr,size);
	printf("Count : %d",count);
}
