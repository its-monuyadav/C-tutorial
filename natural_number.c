#include<stdio.h>

int main () {
    int n;
    printf("enter number :");
    scanf("%d" , &n);

    if(n <= 0 ){
        printf("not a natural number \n");
    }
    else{
        printf("natural number \n");
    }
    return 0;
}