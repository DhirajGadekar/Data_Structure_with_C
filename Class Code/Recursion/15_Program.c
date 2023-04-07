#include<stdio.h>

int sorted(int arr[],int index,int size){
	
	if(size < 0){
		return 0;
	}
	if(arr[index] < arr[index + 1]){
		
		return sorted(arr,index + 1,--size);
	}
}
void main(){
	
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the element in array : ");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}
	int ret = sorted(arr,0,5);
	if(ret == 0){
		printf("Array is Sorted\n");
	}else{
		printf("Array is Not Sorted\n");
	}
}
