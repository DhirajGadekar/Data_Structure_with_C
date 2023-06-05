/*
 Program 6 : Given an Integer array of size of N.
	     Count the number of elements having at least 1 element greater than itself.
		
		Input:
			int arr[] = {2,5,1,4,8,0,8,1,3,8};
		Output:
			7
 */

#include<stdio.h>

int maxElements(int *arr,int size){

        int max = arr[0];
        int count = 0;
        for(int i = 1 ; i < size;i++){

                if(max  < arr[i]){
                        max = arr[i];
                }

        }
        for(int i = 0 ; i < size; i++){

                if(max == arr[i]){

                        count++;
                }
        }
        return size - count;

}
void main(){

        int size;
        printf("Enter the size of array : ");
        scanf("%d",&size);

        int arr[size];
        printf("Enter the array elememts : ");
        for(int i = 0 ; i < size; i++){

                scanf("%d",&arr[i]);
        }

        int count = maxElements(arr,size);
        printf("Count = %d\n",count);
}
