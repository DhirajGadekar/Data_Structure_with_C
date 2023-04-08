//Lomuto Approach :  

#include<stdio.h>

int swap(int *ptr1,int *ptr2){
	
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int partision(int arr[],int start,int end){
	
	int pivot = arr[end];
	int itr = start - 1;
	for(int i = start;i < end;i++){
		
		if(arr[i] < pivot){
			itr++;
			swap(&arr[itr],&arr[i]);
		}
	}
	swap(&arr[itr + 1],&arr[end]);
	return (itr + 1);
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
	printf("Enter the size : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the Element in array :\n");
	for(int i = 0;i < size;i++){
		
		scanf("%d",&arr[i]);
	}

	quick_Sort(arr,0,size-1);
	
	printf("Enter the Element in array : \n");
	for(int i = 0;i < size;i++){
		
		printf("%d ",arr[i]);
	}
	printf("\n");
}
