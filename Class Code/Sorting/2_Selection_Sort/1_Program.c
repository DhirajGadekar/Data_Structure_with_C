#include<stdio.h>

void selection_Sort(int arr[],int size){
	
	for(int i = 0;i < size;i++){
		int minindex = i;
		for(int j = i + 1;j < size;j++){
			
			if(arr[minindex] > arr[j]){
				minindex = j;
			}
		}
		int temp = arr[minindex];
		arr[minindex] = arr[i];
	        arr[i] = temp;	
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
	
	selection_Sort(arr,size);
	printf("Sorting Array Using Selection Sort : ");
        for(int i = 0;i < size;i++){
                printf("%d ",arr[i]);
        }
	printf("\n");
}
