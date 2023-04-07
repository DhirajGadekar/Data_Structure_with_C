#include<stdio.h>

void main() {
    int num = 10;

    int *ptr = &num;

    printf("%p\n",ptr);

    printf("%d\n",*ptr);
}