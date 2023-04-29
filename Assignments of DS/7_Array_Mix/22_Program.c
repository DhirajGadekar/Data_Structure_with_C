/*
 Program 22 : Special Subsequences "AG"
	Problem Description:
		- You have given a string A having Uppercase English letters.
		- You have to find how many times the subsequence "AG" is there in the given
		  string.
		- Return the count of(i,j) such that,
		a) i<j
		b) s[i] = 'A' and s[j] = 'G'
	
	Example Input
		Input 1:
			A = "ABCGAG"
		Input 2:
			A = "GAB"

	Example Output
		Output 1:
			3
		Output 2:
			0
	Example Explanation
		Explanation 1:
			- Subsequence "AG" is 3 times in a given string
		Explanation 2:
			- There is no subsequence "AG" in the given string.
 */

#include<stdio.h>

int subSquences(char *arr,int size){
	
	int count = 0;
	for(int i = 0; i < size;i++ ){
		
		for(int j = i + 1; j < size; j++){
			
			if(arr[i] != 'A'){
				break;
			}
			if(arr[j] == 'G'){
				
				count++;
			}
		}
	}

	return count;
}
void main() {
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	char arr[size];

	printf("Enter the array elements : ");
	for(int i = 0; i < size; i++) {
		
		scanf("%s",&arr[i]);
			
	}
	
	int count = subSquences(arr,size);
	if(count != 0){
		printf("Subsequence 'AG' is %d times in a given String\n",count);
	}else{
		
		printf("There is no subsequence 'AG' in the given string.\n");
	}
}
