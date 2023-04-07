#include<stdio.h>

int floor_Value(int arr[],int size,int key){
	int start = 0,end = size-1,Mid = 0,store = -1;

	if(key > arr[size-1]){
		return arr[size-1];
	}
	if(key < arr[start]){
		return -1;
	}
	while(start <= end){
		
		Mid = (start + end)/2;
		
		if(arr[Mid] == key){
			return arr[Mid];
		}
		if(arr[Mid] > key){
			end = Mid - 1;
		}
		if(arr[Mid] < key){
			store = arr[Mid];
			start = Mid + 1;
		}
	}
	return store;
}

void main(){
	
	int size,key;
	printf("Enter the size of Array : ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the element of Array : ");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter the Key : ");
	scanf("%d",&key);

	int ret = floor_Value(arr,size,key);

	if(ret == -1){
		printf("Numder Not Present\n");
	}else{
		printf("Floor Value is = %d\n",ret);
	}
}
