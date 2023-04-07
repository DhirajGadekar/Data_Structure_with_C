#include<stdio.h>
#include<string.h>

struct cricplayer
{
    char pName[20];
    int jerNo;
    float revenue;
} obj1 = {"Rohit Sharma",45,10.00};

void main(){
    struct cricplayer obj2;

    strcpy(obj2.pName,"Virat Kohli");
    obj2.jerNo = 18;
    obj2.revenue = 10.00;

    printf("Player Name = %s\n",obj1.pName);
    printf("Jercy No = %d\n",obj1.jerNo);
    printf("Revenue = %f\n Cr.",obj1.revenue);

    printf("Player Name = %s\n",obj2.pName);
    printf("Jercy No = %d\n",obj2.jerNo);
    printf("Revenue = %f\n Cr.",obj2.revenue);
}
