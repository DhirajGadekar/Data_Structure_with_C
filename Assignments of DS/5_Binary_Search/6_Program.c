#include<stdio.h>

int peak_element(int arr[],int size){
	
	int start = 0,end = size - 1,Mid = 0,store = -1;
	
	if(arr[start] > arr[start + 1]){
		return arr[start];
	}
	while(start <= end){
		
		Mid = (start + end)/2;

		if(arr[Mid] > arr[Mid - 1] && arr[Mid] > arr[Mid + 1]){
			return arr[Mid];
		}
		if(arr[Mid] < arr[Mid + 1]){
			start = Mid + 1;
		}
		if(arr[Mid] < arr[Mid - 1]){
			end = Mid - 1;
		}
	}
	
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
	
        int retVal = peak_element(arr,size);
        if(retVal == -1){
                printf("Key is Out of range\n");
        }else{
                printf("Peak Element = %d\n",retVal);
        }
}
