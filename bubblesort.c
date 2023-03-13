#include<stdio.h>
int main() {
    int arr[100],n,i,j,swap;
    printf("enter number of element: \n");
    scanf("%d",&n);

    printf("enter %d integer \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }
    printf("sorted array in ascending order :");

    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

    return 0;
}