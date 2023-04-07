#include<stdio.h>
#include<string.h>

struct Movie{
    char mName[20];
    int count;
    float price;
};
void main(){
   
    struct Movie obj;
    struct Movie *ptr = &obj;
    
    strcpy((*ptr).mName,"Kantara");
    (*ptr).count = 5;
    (*ptr).price = 1250.50;8;

    printf("Movie Name = %s\n",(*ptr).mName);
    printf("Count = %d\n",(*ptr).count);
    printf("price = %f\n",(*ptr).price);
}