#include<stdio.h>

int fun(int x){
	
	printf("%d\n",x);
	fun(--x);
}
void main(){
	
	fun(5);
}

//segmentation fault after stack frames overfull
