// Bubble Sort using one loop : 

#include<stdio.h>

int bubble_Sort(int arr[],int size){
	int count = 0;
	for(int i = 0;i < size - 1;i++){
		
		if(arr[i] > arr[i + 1]){
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
		if(i == size - 2){
			i = 0;
			count++;
		}
		if(count == size){
			return 0;
		}
		printf("%d \n",i);

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
        for(int i = 0;i < size;i++){
                printf("%d ",arr[i]);
        }
	printf("\n");
}
