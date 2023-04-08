#include<stdio.h>

int bubble_Sort(int arr[],int size){
	
	for(int i = 0;i < size-1;i++){
		for(int j = 0;j < size-1-i;j++){

			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j  + 1] = temp;
			}
		}
	}
}

void main(){
	
	int size,key;
        printf("Enter the size of Array : ");
        scanf("%d",&size);

        int arr[size];
        printf("Enter the element of Array : \n");
        for(int i = 0;i < size;i++){
                scanf("%d",&arr[i]);
        }
	
	bubble_Sort(arr,size);
	printf("Sorted Array : ");
        for(int j = 0;j < size;j++){
                printf("%d ",arr[j]);
        }
	printf("\n");
}
