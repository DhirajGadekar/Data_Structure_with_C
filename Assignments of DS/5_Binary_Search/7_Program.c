#include<stdio.h>
int arr2[2] = {-1,-1};

int Search_range(int arr1[],int size,int key){
	int start = 0,end = size - 1,Mid = 0,i = 0;

	while(start <= end){
		Mid = (start + end)/2;
		if(arr1[Mid] == key){
			arr2[i++] = Mid;
		}
		if(arr1[Mid] > key ){
			end = Mid - 1;
		}
		if(arr1[Mid] < key){
			start = Mid + 1;
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
	printf("Enter the key : ");
	scanf("%d",&key);

        int retVal = Search_range(arr,size,key);

    	if(arr2[0] == -1 && arr2[1] == -1){
		printf("[%d,%d]\n",arr2[0],arr2[1]);
	}else if(arr2[0] != -1 && arr2[1] == -1){
		printf("[%d,%d]\n",arr2[0],arr2[0]);
	}else{
		printf("[%d,%d]\n",arr2[0],arr2[1]);
	}
}
