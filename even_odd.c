#include <stdio.h>

int main () {
    // even = 1
    // odd = 0
    int n;
    printf("enter number");
    scanf("%d" ,&n);
    printf("%d" , n % 2 == 0);

    return 0;

}