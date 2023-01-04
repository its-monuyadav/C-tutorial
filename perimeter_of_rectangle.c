#include<stdio.h>

int main () {
    int length ,bredth;
    printf("enter length");
    scanf("%d" ,&length);

    printf("enter bredth");
    scanf("%d" , &bredth);

    printf("perimeter of rectangle  %d " , length + bredth + length + bredth );

    return 0;

}