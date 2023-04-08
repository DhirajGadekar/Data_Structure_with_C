#include<stdio.h>

int insert_position(int arr[],int size,int key){
	
	int start = 0,end = size - 1,Mid = 0;
	int store = -1;
	while(start <= end){
		
		Mid = (start + end)/2;

		if(arr[Mid] == key){
			return Mid;
		}
		if(arr[Mid] > key){
			store = Mid;
			end = Mid - 1;
		}
		if(arr[Mid] < key){
			start = Mid + 1;
		}
	}
	return store;
}
void main(){
	
	int size,key,Mid = 0,start = 0,ret;
        printf("Enter the size of Array : ");
        scanf("%d",&size);

        int arr[size],end = size - 1;
        printf("Enter the element of Array : \n");
        for(int i = 0;i < size;i++){
                scanf("%d",&arr[i]);
        }

        printf("Enter the Key : ");
        scanf("%d",&key);

	int retVal = insert_position(arr,size,key);
	if(retVal == -1){
		printf("Key is Out of range\n");
	}else{
		printf("Sorted Insert Position = %d\n",retVal);
	}
}
