/*
 program 2 : sort {"Ashish", "kanha", "7", "Raj","3","Shashi","9","6"}
 */

#include<stdio.h>
#include<string.h>

int Ascii(char *str){
	
	for(int i = 0; i <= 128;i++){
		
		if(str[0] == i){
			
			return i;
		}
	}

}

void Selection_Sort(int col,char str[][col],int row){
	
	char temp[col];
	for(int i = 0; i < row; i++){
		int min = i;
		for(int j = 1 + i; j < row;j++){
			
			if(Ascii(str[min]) > Ascii(str[j])){
				
				min = j;
			}
		}
		strcpy(temp,str[min]);
		strcpy(str[min],str[i]);
		strcpy(str[i],temp);
	}

}
void main(){
	
	int col = 6;
	int row = 8;

	char str[8][6] = {"Ashish","kanha","7","Raj","3","Shashi","9","6"};
		
	Selection_Sort(col,str,row);

	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < col; j++){
			
			printf("%c",str[i][j]);
		}
	}

}
