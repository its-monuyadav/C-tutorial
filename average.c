#include <stdio.h>

int main ()  {
    int a , b , c;
    printf("enter three numbers");
    scanf("%d %d %d" , &a ,&b , &c);
    int sum = a + b + c;
    int average = sum / 3;

    printf("%d" , average);

    return 0;
}