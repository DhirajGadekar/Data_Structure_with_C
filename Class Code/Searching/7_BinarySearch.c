//Rotate Array :

#include<stdio.h>

int rotate_Array(int arr[],int start,int end,int key){
	int Mid = 0;
	while(start <= end){
		
		Mid = (start + end)/2;
		if(arr[Mid] == key){
			return Mid;
		}
		if(arr[Mid] > key){
			end = Mid - 1;
		}
		if(arr[Mid] < key){
			start = Mid + 1;
		}
	}
	return -1;
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

	for(int i = 0;i < size;i++){
		if(arr[i] > arr[i + 1]){
			Mid = i;
		}
	}
	
	if(end < key){
		end = Mid;
		ret = rotate_Array(arr,start,end,key);
		
	}else{
		start = Mid + 1;
		ret = rotate_Array(arr,start,end,key);
	}

	if(ret == -1){
		printf("Key is Not present Array \n");
	}else{
		printf("Key Element Index is %d\n",ret);
	}
	
}

