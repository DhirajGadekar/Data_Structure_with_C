#include<stdio.h>
#include<stdbool.h>

bool arrevenele(int arr[],int size,int count){
	if(size < 0){
		if(count >= 2){
			return true;
		}else{
			return false;
		}
	}
	if(arr[size - 1] % 2 == 0){
		
		count++;
	}
	return arrevenele(arr,size-1,count);
}
void main(){

	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}

	bool retVal = arrevenele(arr,size,0);
	if(retVal == true){
		printf("Satisfied\n");
	}else{
		printf("Not Satisfied\n");
	}
}
