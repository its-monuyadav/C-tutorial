#include<stdio.h>
//declaration
void Namaste();
void Bonjour();

int main() {
    char ch;
    printf("enter f for french & i for indian :");
    scanf("%c", &ch);

    if(ch == 'i'){
        Namaste();
    }
    else  {
        Bonjour();
    }
    
    return 0;
}

//function definition
void Namaste() {
   printf("Namaste\n");
}

void Bonjour(){
    printf("Bonjour\n");
}