#include<stdio.h>

int main () {
int cp, sp, amount;
printf("enter cp :");
scanf("%d", &cp);
printf("enter sp :");
scanf("%d", &sp);

if (sp>cp)
{
    amount = sp - cp;
    printf("profit is %d", amount);
}
else if (cp>sp)
{
    amount = cp - sp;
    printf("loss is %d", amount);
}
else
    printf("no profit & no loss ");
}