#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int compair(char str1[],char str2[],int length){
        if(length == 0){
                return true;
        }
        if(str1[length - 1] == str2[length - 1]){

                return compair(str1,str2,length-1);
        }
        return false;

}
void main(){

	char str1[20],str2[20];
	printf("Enter 1st String : ");
        fgets(str1,20,stdin);;
	printf("Enter 2nd String : ");
     	fgets(str2,20,stdin);

	if(strlen(str1) == strlen(str2)){

        	bool ret = compair(str1,str2,strlen(str1));
        	if(ret == true){
                	printf("String equal\n");
        	}else{
                	printf("String not Equal\n");
        	}
	}else{

               	printf("String not Equal\n");
	}
}

