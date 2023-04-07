//Fibonacci Series with recursion :


#include<stdio.h>

/*
void Fibo(int N){
	
	int a1 = 0,a2  = 1,b = 0;
	b = a1 + a2;
	while((N+1)--){
		
		printf("%d ",a1);
		a2 = a1;
		a1 = b;
		b = a1 + a2;
	}
	printf("\n");

}
*/

int Fibo(int N){
	
	if(N == 1){
		return 1;
	}
	if(N == 0){
		return 0;
	}

	return Fibo(N - 1) + Fibo(N - 2);
}
void main(){

	int retval = Fibo(6);
	printf("retval = %d\n",retval);
}
