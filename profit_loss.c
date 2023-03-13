#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int a, b, add, sub;
   printf("enter int value");
   scanf("%d %d", &a, &b);

   printf("enter float value");
   scanf("%f %f", &a, &b);

   add = a+b;
   sub = a-b;

   printf("%d", add);
   printf("%d", sub);
   printf("%f", add);
   printf("%f", sub);
    
    return 0;
}