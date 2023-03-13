#include<stdio.h>

int sum();

int main(){
    int s;
    s=sum();
    printf("sum = %d",s);

    return 0;
}

int sum()
{
    int a=5,b=4,sum=0;
    return a+b;
}