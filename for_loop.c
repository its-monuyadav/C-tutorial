#include<stdio.h>

int main (){
    
    for(int i=0; i<=10; i++) {
        printf("%d \n", i);
    }
    for(char ch='a'; ch<='z'; ch++) {
        printf("%c \n" , ch);
    }
    for(float i=1.0; i<=10.0; i++) {
        printf("%f \n", i);
    }
    return 0;
}