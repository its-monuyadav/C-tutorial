#include<stdio.h>

void sum(int,int);

int main( ){
    int x,y;
    printf("enter x & y :");
    scanf("%d%d",&x,&y);
    sum(x,y);

    return 0;
}

void sum (int a , int b)
{
    int s;
    s =a+b;
    printf("sum = %d",s);
}