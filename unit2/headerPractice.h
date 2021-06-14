#include <stdio.h>
#define pi 3.1416

int libInteger = 24;


void sayHello(char message[]){
    printf("%s\n", message);
}

void sayMyname(char message[]){
    printf("%s\n", message);
}

int addTwoNumbers(int argument1,int argument2){
    int result = argument1 + argument2;
    return result; 
}