#include<stdio.h>

int Demo(int num){

	printf("Hello\n");
	if(num != 1){
		
		Demo(--num);
	}
	printf("Bye\n");
}

void main(){
	
	Demo(5);
}
