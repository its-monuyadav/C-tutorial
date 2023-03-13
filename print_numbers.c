#include<stdio.h>
int main (){
    int n, num;
    long fact = 1;
    printf("enter number");
    scanf("%d", &n);
    if (n<0)
    {
        printf("no negative number for factorial ");
    }
    else{
        while (n>1)
        {
            fact = fact*n;
            n--;
        }
        printf("factorial of given number is %d",fact);

        
    }
    
}