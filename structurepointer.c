#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main(){
    struct student s1={1,"monu" ,90};
    struct student *ptr=&s1;

    printf("info of s1:\n");
    printf("%d %s %f",ptr->rollno, ptr->name, ptr->marks);
}
