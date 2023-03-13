#include<stdio.h>

void sum(void);

int main (){

    sum();
    return 0;
}

void sum()
{
    int a=5,b=3, sum=0;
    sum = a+b;
    printf("sum = %d:",sum);
}