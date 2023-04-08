#include<stdio.h>
#include<string.h>

int ascii(char *str){

	for(int i = 0;i <= 128;i++){
		if(str[0] == i){
			return i;
		}
	}
	
}
void bubble_sort(int col,char str[][col],int row){
	
	for(int i = 0;i < row - 1;i++){
		
		for(int j = 0;j < row - i - 1;j++){

			if(ascii(str[j]) > ascii(str[j + 1])){

				char temp[10];
                                strcpy(temp,str[j]);
                                strcpy(str[j],str[j + 1]);
                                strcpy(str[j + 1],temp);

			}
		}
	}
}

void main(){
	
	int row = 8;
	int col = 10;
	char str[][10] = {"Ashish", "Kanha","7","Raj","3","Shashi","9","6"};

	bubble_sort(col,str,row);

	for(int i = 0;i < row;i++){
		for(int j = 0;j < col;j++){
			printf("%c",str[i][j]);
		}
		printf("\n");
	}
}
