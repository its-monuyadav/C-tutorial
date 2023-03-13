#include<stdio.h>
int main (){
    int a[5], b[5], c[5];
    int i;
    printf("enter first array");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);

    printf("enter second array");
    for(i=0; i<5; i++)
        scanf("%d", &b[i]);

    for(i=0; i<5; i++)
    {
        c[i]=a[i]+b[i];
        printf("sum array element = %d\n",c[i]);
    }
}