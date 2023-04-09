/*
 Program 9 : Write a program in C to reverse a string using recursion.
		Test Data :
		Input any string: 
			w3resource
		Expected Output:
			The reversed string is: ecruoser3w   
 */

#include<stdio.h>

int String_rev(char *str1,char *str2,char temp){

	if(str1 < str2){
		
		temp = *str1;
		*str1 = *str2;
		*str2 = temp;	

		str1++;
		str2--;

		String_rev(str1,str2,temp);
	}
	return 0;
	
}

void main(){
	
	char str1[20];
	printf("Enter the String : ");
	gets(str1,20,NULL);

	char temp = 0;
	char *str2 = str1;
	while(*str2 != '\0'){
		
		str2++;
	}
	str2--;
	String_rev(str1,str2,temp);
	puts(str1);

}
