#include<stdio.h>

int search(int *arr,int target){

	int start = 0;
	int end = ((sizeof(arr) / sizeof(int)) - 1);
	int size = end + 1;
	int start1 = 0;
	int end1 = 0;
	for(int i = 1; i < size - 1;i++){

		if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
			
			end1 = end;
			end = i;
			start1 = i + 1;
		}else if(arr[i] < arr[i - 1] && arr[i] < arr[i + 1]){

			end1 = end;
			end = i;
			start1 = i + 1;
		}
	}

	printf("start = %d\n",start);
	printf("end = %d\n",end);
	printf("start1 = %d\n",start1);
	printf("end1 = %d\n",end1);
	int mid1 = 0;
	int mid2 = 0;

	while(start < end || start1 < end1){
		
		if(start < end){
			
			mid1 = (start + end)/2;
			if(arr[mid1] == target){
				
				return mid1;
			}else if(arr[mid1] > target){
				
				start = mid1 + 1; 
			}else if(arr[mid1] < target){
				
				end = mid1 - 1;
			}
		}
		if(start1 < end1){
			
			mid2 = (start1 + end1)/2;
			if(arr[mid2] == target){
				
				return mid2;
			}else if(arr[mid2] > target){
				
				start1 = mid2 + 1; 
			}else if(arr[mid2] < target){
				
				end1 = mid2 - 1;
			}
		}
	}
}

void main(){
	
	int arr[] = {4,5,6,7,0,1,2,3};
	int target = 4;

	int ret = search(arr,target);
	printf("%d\n",ret);

}
