#include<stdio.h>
int main(){
    int n,i,j,temp;
    int arr[100];

    printf("enter no of element: ");
    scanf("%d",&n);

    printf("enter %d integer\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0 && arr[j-1] >arr[j])
        {
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    printf("sorted array in ascending order:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}