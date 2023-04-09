/*
 Program 8 : Write a program in C to get the largest element of an array using recursion. 
		Test Data :
			Input the number of elements to be stored in the array :5
		Input 5 elements in the array :
			element - 0 : 5
			element - 1 : 10
			element - 2 : 15
			element - 3 : 20
			element - 4 : 25
		Expected Output :
			Largest element of an array is: 25 
 */

#include<stdio.h>

int Larg_Ele_Arr(int *arr,int size,int max){
	
	static int Index = 0;
	
	if(size != Index){
		
		if(max < arr[Index]){

			max = arr[Index];
		}
		Index++;
		Larg_Ele_Arr(arr,size,max);
	}else{
		
		return max;
	}

}
void main(){
	
	int size;
	printf("Enter the size of Array : ");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter the Elements in Array : \n");
	for(int i = 0; i < size;i++){
		printf("element - %d :",i);
		scanf("%d",&arr[i]);
	}
	int max1 = arr[0];
	int max = Larg_Ele_Arr(arr,size,max);
	printf("Largest Element in Array : %d\n",max);
}

