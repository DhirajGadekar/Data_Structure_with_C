#include<stdio.h>

int ciling_Value(int arr[],int size,int key){
	
	int start = 0,end = size -1,Mid = 0,store = -1;

	if(arr[end] < key){
		return -1;
	}
	if(arr[start] > key){
		return arr[start];
	}
	while(start <= end){
		
		Mid = (start + end)/2;

		if(arr[Mid] == key){
			return arr[Mid];
		}
		if(arr[Mid] > key){
			store = arr[Mid];
			end = Mid - 1;
		}
		if(arr[Mid] < key){
			start = Mid + 1;
		}
	}
	return store;
}

void main(){
	int size,key;
        printf("Enter the size of Array : ");
        scanf("%d",&size);

        int arr[size];
        printf("Enter the element of Array : \n");
        for(int i = 0;i < size;i++){
                scanf("%d",&arr[i]);
        }

        printf("Enter the Key : ");
        scanf("%d",&key);

        int ret = ciling_Value(arr,size,key);

        if(ret == -1){
                printf("Numder Not Present\n");
        }else{
                printf("ciling Value is = %d\n",ret);
        }
	
}
