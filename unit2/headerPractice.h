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

//Paso de argumentos por dirección//
void modifyVariables(int argument1, int argument2){
    argument1 = argument1 * 2;
    argument2 = argument2 * 2;
    return;
}


void modifyVariablesAddress(int* ptr1, int* ptr2){
    *ptr1 = *ptr1 * 2;
    *ptr2 = *ptr2 * 2;
    return;
}


void ShowIntAddress(int* param){
    prinft("address var1: %p \n", param);
}



void modifyVariablesAddress( int*dir1, int*dir2){
    ShowIntAddress(dir1);
    ShowIntValueAddress(dir1);
    ShowIntAddress(dir2);
    ShowIntValueAddress(dir2);
    *dir1 = *dir1 * 2;
    *dir1 = *dir2 * 2;

    return;
}

void swapF (int* n1, int*n2){
    int n3;
    n3 = *n1;
    *n1 = *n2;
    *n2 = n3;
    return;
}
