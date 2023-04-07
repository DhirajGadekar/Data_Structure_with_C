//Interpolation Search :

#include<stdio.h>

int search_Inter(int arr[],int size,int key){
	
	int start = 0,end = size - 1,search = 0;

	search = start + ((key - arr[start])/(arr[end] - arr[start])) * (end - start);
	printf("%d\n",search);
	return search;
}
void main(){
	
	int size,key;
        printf("Enter the Size of array : ");
        scanf("%d",&size);

        int arr[size];
        printf("Enter the Element in array :\n");
        for(int i = 0;i < size;i++){
                scanf("%d",&arr[i]);
        }

        printf("Which Number Index you want : ");
        scanf("%d",&key);

        int retVal = search_Inter(arr,size,key);
        if(retVal == -1){
                printf("Number Not Found in Array\n");
        }else{
                printf("Searching Element Index is %d\n",retVal);
        }
	
}
