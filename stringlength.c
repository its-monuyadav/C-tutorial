#include<stdio.h>
#include<string.h>
int main (){
int count=0,i=0;
char name[30];
printf("enter name: ");
gets(name);
puts(name);
while (name[i]!='\0')
{
    count++;
    i++;
}
printf("length of string is :%d",count);

}