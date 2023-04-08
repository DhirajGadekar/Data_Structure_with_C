/*
 Program 4:
 */

#include<stdio.h>

int Single_Element(int arr[],int size){
	int start = 0,end = size - 1,Mid = 0;

	if(arr[start] != arr[start + 1]){
		return arr[start];
	}
	if(arr[end] != arr[end - 1]){
		return arr[end];
	}
	while(start <= end){
		
		Mid = (start + end)/2;

		if(arr[Mid - 1] != arr[Mid] && arr[Mid + 1]  != arr[Mid]){
			return arr[Mid];
		}
		if(arr[Mid-1] == arr[Mid - 2] || (arr[Mid] == arr[Mid - 1] )){
			start = Mid + 1;
		
		}
		
		if(arr[Mid + 2] == arr[Mid + 1] || arr[Mid] == arr[Mid + 1] ){
			end = Mid - 1;
		}
	}
	return -1;
}

void main(){
	
	int size = 9;
        int arr[9] = {1,1,2,3,3,4,4,5,5};
        int ret = Single_Element(arr,size);

        if(ret == -1){
                printf("Numder Not Present\n");
        }else{
                printf("Single Element in Sorted Array = %d\n",ret);
        }

}	
