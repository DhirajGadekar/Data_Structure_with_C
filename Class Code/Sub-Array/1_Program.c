/*
 Program 1 : Print all Subarray in the original array
 */

#include<stdio.h>

int sub_Array(int *arr,int size){
	
	printf("Sub-arrays in array : \n");
        for(int i = 0; i < size; i++){
        
                for(int j = i; j < size; j++){
                
                        printf("{ ");
                        for(int k = i; k < j + 1; k++){
                                
                                printf("%d ",arr[k]);
                        }
                        printf("}\n");
                }
        }

}

void main(){

	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements in array : ");
	for(int i = 0; i < size; i++){
		
		scanf("%d",&arr[i]);
	}

	sub_Array(arr,size);
}
