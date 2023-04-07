#include<stdio.h>

int fun(int num){

	static int sum = 0;
	sum = sum + num;

	if(num != 0){
		fun(--num);
	}
	return sum;
}

void main(){

	int retVal = fun(5);
	printf("sum = %d\n",retVal);
}
