//Linear Search : 

#include<stdio.h>
#include<stdlib.h>

int search_element(int arr[],int size,int key){
	
	for(int i = 0;i < size;i++){
		
		if(arr[i] == key){
			return i;
		}
	}
	return -1;

}
int search_last_occ(int arr[],int size,int key){
	
	int store = -1;
	for(int i = 0;i < size;i++){
		
		if(arr[i] == key){
			store = i;	
		}
	}
	return store;

}
int search_seclast_occ(int arr[],int size,int key){

	int firstOcc = -1,secOcc = -1;
	for(int i = 0;i < size;i++){
		
		if(arr[i] == key){
			secOcc = firstOcc;
			firstOcc = i;
		}
	}
	return secOcc;

}
void main() {
		int size,key;
		printf("Enter the Size of array : ");
		scanf("%d",&size);

		int arr[size];
		printf("Enter the Element of Array : \n");
		for(int i = 0;i < size;i++){
			scanf("%d",&arr[i]);
		}
		printf("Enter the Searching Number : ");
		scanf("%d",&key);
	
		while(1){
			int choice;
			printf("\n1.Search Element\n2.Search Last Occurance\n3.Search Second Last Search\n4.Exit");
			printf("\n\nEnter your Choice : ");
			scanf("%d",&choice);

			switch(choice){
				case 1:{
						int retVal = search_element(arr,size,key);
						if(retVal == -1){
							printf("Element is Not Found in Array\n");
						}else{
							printf("Search Element Index = %d\n",retVal);
				       		}
				       }
				       break;
				case 2:{
						int retVal = search_last_occ(arr,size,key);
						if(retVal == -1){
							printf("Element is Not Found in Array\n");
						}else{
							printf("Search Element Index = %d\n",retVal);
						}
				       }
			               break;	       
				case 3:{
						
						int retVal = search_seclast_occ(arr,size,key);
						if(retVal == -1){
							printf("Element is Not Found in Array\n");
						}else{
							printf("Search Element Index = %d\n",retVal);
				       		}
					}		
				       break;
				case 4:
				       exit(0);
				default:
				       printf("Invalid Choice\n");
			}
		}
}
