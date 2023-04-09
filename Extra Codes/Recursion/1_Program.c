/*
 Problem 1 : Write a program in C to print the first 50 natural numbers using recursion. 
	    Expected Output:

 The natural numbers are : 1  2  3
  4  5  6  7  8  9  10  11  12  13
  14  15  16  17  18  19  20  21  
22  23  24  25  26  27  28  29  30
  31  32  33  34  35  36  37  38  
39  40  41  42  43  44  45  46  47
  48  49  50 
 */

#include<stdio.h>

int natural_Num(int num){
	
	printf("%d\n",num++);
	
	if(num != 51){
		natural_Num(num);
	}
	return 0;
}

void main(){

	int num = 1;
	natural_Num(num);
}
