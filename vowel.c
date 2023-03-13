#include<stdio.h>

int main () {
    char c;
    printf("enter character :");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf(" alphabet");
    }
    else if ((c >= '0') && (c <= '9'))
    {
        printf(" digit");
    }
    else 
    {
        printf(" special character");
    }
    
}