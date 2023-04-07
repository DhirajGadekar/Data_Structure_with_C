#include<stdio.h>

int fun(int x){

	if(x == 0){
		return 0;
	}
	printf("%d\n",x);
	return fun(--x);
}

void main(){
	
	fun(6);
}
