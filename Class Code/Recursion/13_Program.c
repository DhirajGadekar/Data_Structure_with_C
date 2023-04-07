#include<stdio.h>

int reverce(int num,int rev){
	
	if(num != 0){
	
		return reverce(num/10, (num % 10)+(rev * 10));
	}
	return rev;
}

void main(){
	
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);

	int retVal = reverce(num,0);
	printf("Reverce of Given Number is %d\n",retVal);
}
