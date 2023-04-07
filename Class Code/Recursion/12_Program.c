#include<stdio.h>

int countStep(int N,int step){

	if(N == 0){
		return step;
	}

	if(N % 2 == 0){
		
		return countStep(N/2,++step);
	}else{

		return countStep(N-1,++step);
	}

}
void main(){
	
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);

	int ret = countStep(num,0);
	printf("Count Step = %d\n",ret);
}
