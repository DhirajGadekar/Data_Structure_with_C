#include<stdio.h>

void merge(int arr[],int start,int mid,int end){
	
	int ele1 = mid - start + 1;
	int ele2 = end - mid;

	int arr1[ele1],arr2[ele2];

	for(int i = 0;i < ele1;i++){
		
		arr1[i] = arr[start + i];
	}

	for(int i = 0;i < ele2;i++){
		arr2[i] = arr[mid + 1 + i];
	}
	int itr1 = 0,itr2 = 0,itr3 = start;

	while(itr1 < ele1 && itr2 < ele2){
		
		if(arr1[itr1] < arr2[itr2]){
			
			arr[itr3] = arr1[itr1];
			itr1++;
		}else{
			
			arr[itr3] = arr2[itr2];
			itr2++;
		}
		itr3++;
	}
	while(itr1 < ele1){
		
		arr[itr3] = arr1[itr1];
		itr1++;
		itr3++;
	}
	while(itr2 < ele2){
		
		arr[itr3] = arr2[itr2];
		itr2++;
		itr3++;
	}

}
void merge_sort(int arr[],int start,int end){
	
	if(start < end){
		
		int mid = (start + end)/2;
		merge_sort(arr,start,mid);
		merge_sort(arr,mid + 1,end);

		merge(arr,start,mid,end);
	}
}
void main(){
	
	int size;
	printf("Enter the Size : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the element in Array : \n");
	for(int i = 0 ;i < size;i++){
		scanf("%d",&arr[i]);
	}

	merge_sort(arr,0,size-1);
	
	printf("Sorted Array : \n");
	for(int i = 0 ;i < size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
