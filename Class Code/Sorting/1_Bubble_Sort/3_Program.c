//Sorting array of String by Length : 


#include<stdio.h>
#include<string.h>

int mystrlen(char *str){
	
	int count = 0;
	while(*str != '\0'){
		
		count++;
		str++;
	}
	return count;
}

int bubble_sort(int col,char str[][col],int row){
	
	for(int i = 0; i < row;i++){
		
		for(int j = 0; j < row - 1;j++){
			
			if(mystrlen(str[j]) > mystrlen(str[j + 1])){
				char temp[10];
				strcpy(temp,str[j]);
				strcpy(str[j],str[j + 1]);
				strcpy(str[j + 1],temp);
				
			}
		}

	}
}
void main(){
	int row = 4;
	int col = 10;
	char str[][10] = {"shashi" ,"Rahul", "Anuj","Raj"};
	bubble_sort(col,str,row);

	for(int i = 0;i < row;i++){
		
		for(int j = 0;j < col;j++){
			
			printf("%c",str[i][j]);
		}
		printf("\n");
	}
}
