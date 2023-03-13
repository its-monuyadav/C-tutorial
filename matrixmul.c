#include<stdio.h>
int main (){
    int a[10][10], b[10][10], c[10][10], i, j, k,m,n,p,q;
    int sum=0;
    printf("enter rows and columns for first matrix: \n");
    scanf("%d%d",&m,&n);

    printf("\nenter first matrix:");
    for(i=0;i<m;i++) {
      for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
      }
    }
    printf("enter rows and columns for second  matrix: \n");
    scanf("%d%d",&p,&q);

     printf("\nenter second matrix:");
    for(i=0;i<p;i++) {
      for(j=0;j<q;j++){
        scanf("%d",&b[i][j]);
      }
    }

    printf("the first matrix is: \n");
    for(i=0;i<m;i++) {
      for(j=0;j<n;j++){
        printf("%d ",a[i][j]);
      }
      printf("\n");
    }

     printf("the second matrix is:\n");
    for(i=0;i<p;i++) {
      for(j=0;j<q;j++){
        printf("%d ",b[i][j]);
      }
      printf("\n");
    }
    if(n!=p)
    {
        printf("cannot multiply");
    }
    else{
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                for(k=0;k<m;k++){
                    sum = sum+(a[i][j]*b[i][j]);
                }
                c[i][j] = sum;
            }
        }
        printf("multiply is: \n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}