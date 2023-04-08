//Haore's Approach : 

#include<stdio.h>

int partision(int arr[],int start,int end){
	
	int pivot = arr[start];
	int i = start -1;
	int j = end + 1;
	while(1){
		do{
			i++;
		}while(arr[i] < pivot);

		do{
			j--;
		}while(arr[j] > pivot);

		if(i >= j){
			return j;
		}
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
void quick_Sort(int arr[],int start,int end){
		
	if(start < end){
		
		int pivot = partision(arr,start,end);
		quick_Sort(arr,start,pivot);
		quick_Sort(arr,pivot + 1,end);
	}
}
void main(){
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the element of Array :\n");
	for(int i = 0 ;i <size;i++){
		scanf("%d",&arr[i]);
	}

	quick_Sort(arr,0,size-1);
	
	printf("Sorted Array : ");
	for(int i = 0 ;i <size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
