
#include<stdio.h>

void main(){
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the Elements in Array : ");
	for(int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}

	int query;
	printf("Enter the Number of Query : ");
	scanf("%d",&query);

	for(int i = 1; i <= query; i++){
		
		int start,end;
		printf("Enter the start : ");
		scanf("%d",&start);
		
		printf("Enter the end : ");
		scanf("%d",&end);
		int sum = 0;
		for(int j = start; j <= end; j++){
			
			sum = sum + arr[j];
		}
		printf("Query NO %d Sum is : %d \n",i,sum);
	}
}
