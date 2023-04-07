#include<stdio.h>

int countZero(long int num,int count){
	
	if(num == 0 ){
		return count;
	}
	long int rem = num % 10;
	if(rem % 10 == 0){
		count++;
	}
	return countZero(num/10,count);
}
void main() {
	
	long int num;
	printf("Enter the Number : ");
	scanf("%ld",&num);

	int retval = countZero(num,0);
	printf("Count is %d\n",retval);
	
}
