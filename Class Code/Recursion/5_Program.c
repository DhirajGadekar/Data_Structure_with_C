#include<stdio.h>

int fact(int N){

	if(N == 1){
		return 1;
	}
	return N * fact(N-1);
}

void main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);

	int retval = fact(num);
	printf("Factorial of %d is %d\n",num,retval);
}
