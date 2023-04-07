#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int ncompair(char str1[],char str2[],int N){
	if(N == 0){
		return true;
	}
	if(str1[N - 1] == str2[N - 1]){
		
		return ncompair(str1,str2,N-1);
	}
	return false;
	
}
void main(){
	int N;
	char str1[20],str2[20];

	printf("Enter 1st string : ");
	fgets(str1,20,stdin);

	printf("Enter 2nd string : ");
	fgets(str2,20,stdin);

	printf("Enter the Number : ");
	scanf("%d",&N);

	bool ret = ncompair(str1,str2,N);
	if(ret == true){
		printf("String equal\n");
	}else{
		printf("String not Equal\n");
	}
}
