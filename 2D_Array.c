#include<stdio.h>

int main () {
int a[3][3],i ,j , sum=0;
    printf("enter an element in array:");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
              
        }
    }
    printf("matrix is :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("sum = %d",sum);
    return 0;
}