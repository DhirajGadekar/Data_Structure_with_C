#include<stdio.h>

int bubble(int *arr1,int *arr2,int size){
	
	for(int i = 0 ; i < size; i++){
		
		for(int j = 0; j < size - i - 1; j++){
			
			if(arr1[j] > arr1[j + 1]){
				int temp1 = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp1;
			}
			if(arr2[j] > arr2[j + 1]){
				int temp2 = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp2;
			}
		}
	}
}
int MergeArray(int *arr1,int *arr2,int *add,int i,int j){
	
	int m = 0, n = 0;
	
	for(int k = 0 ; k < i+j; k++){
		
		if(m >= i){
			
			add[k] = arr2[n];
			n++;
		}else if(n >= j){
			
			add[k] = arr1[m];
			m++;
		}else if(arr1[m] > arr2[n] && m < i){
			
			add[k] = arr2[n];
			n++;
		}else if(arr2[n] > arr1[m] && n < j){
			
			add[k] = arr1[m];
			m++;
		}
	}
}

void main(){

	int arr1[] = {3,2,6,7};
	int arr2[] = {5,4,1,8,9};

	int size = sizeof(arr1) / sizeof(int);

	int add[size + size];
	bubble(arr1,arr2,size);
	MergeArray(arr1,arr2,add,4,5);

	for(int i = 0 ; i < 9;i++){
		printf("%d ",add[i]);
	}
	
}

