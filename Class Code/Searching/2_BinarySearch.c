//Binary Search : 

#include<stdio.h>

int searchBinary(int arr[],int size,int key){
	
	int start = 0,end = size-1,Mid = 0;
	while(start <= end){
		
		Mid = (start + end)/2;

		if(arr[Mid] == key){
			return Mid;
		}
		if(arr[Mid] < key){
			start = Mid + 1;
		}
		if(arr[Mid] > key){
			end = Mid - 1;
		}
	}
	return -1;
}

void main() {
	
	int size,key;
	printf("Enter the Size of array : ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the Element in array :\n");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Which Number Index you want : ");
	scanf("%d",&key);
	
	int retVal = searchBinary(arr,size,key);
	if(retVal == -1){
		printf("Number Not Found in Array\n");
	}else{
		printf("Searching Element Index is %d\n",retVal);
	}
}
