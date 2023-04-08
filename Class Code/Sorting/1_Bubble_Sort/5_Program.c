//Factors Sort :

#include<stdio.h>

int factor(int num){
	int count = 0;
	for(int i = 0;i < num;i++){
		if(num % i == 0){
			count++;
		}
	
	}
	printf("%d\n",count);
	return count;
}
int bubble_sort(int arr[],int size){
	
	for(int i = 0;i < size - 1;i++){
		
		for(int j = 0;j < size - i - 1;j++){
			
			if(factor(arr[j]) > factor(arr[j])){
				
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void main(){
	
	int size;
	printf("Enter the Size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the element : \n");
	for(int i = 0;i < size;i++){
		
		scanf("%d",&arr[i]);
	}

	bubble_sort(arr,size);

	printf("Sorted array : ");
	for(int i = 0;i < size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

}
