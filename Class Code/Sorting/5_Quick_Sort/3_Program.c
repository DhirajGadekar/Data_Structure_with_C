//Naive Approach : 

#include<stdio.h>

int partision(int arr[],int start,int end){
	
	int pivot = arr[end];
	int temp[end - start + 1];
	int index = 0;

	for(int i = start;i < end;i++){
		if(arr[i] <= pivot){
			temp[index] = arr[i];
			index++;
		}
	}
	int pos = index + start;
	temp[index] = pivot;
	index++;

	for(int i = start;i < end;i++){
		if(arr[i] > pivot){
			temp[index] = arr[i];
			index++;
		}	
	}

	for(int i = start ;i <= end;i++){
		arr[i] = temp[i - start];
	}
	return pos;
}
void quick_Sort(int arr[],int start,int end){
	
	if(start < end){
		int pivot = partision(arr,start,end);
		quick_Sort(arr,start,pivot - 1);
		quick_Sort(arr,pivot + 1,end);
	}	
	
}
void main(){
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the element in Array : ");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}

	quick_Sort(arr,0,size - 1);
	printf("Enter the element in Array :\n");
	for(int i = 0;i < size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
