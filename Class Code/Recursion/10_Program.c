//Palindrome String :

#include<stdio.h>

int ispalindrome(char arr[],int start,int end){
	
	if(start > end){
		
		return 0;
	}else if(arr[start] == arr[end]){
		
		return ispalindrome(arr,start + 1,end - 1);
	}else{
		
		return -1;
	}
}

void main(){
	
	int size = 5;
	char arr[5] = {'m','a','d','a','m'};
	
	int retval = ispalindrome(arr,0,size-1);

	if(retval == 0){
		
		printf("String is Palindrome\n");
	}else{
		printf("String is Not Palindrome\n");
	}
}
