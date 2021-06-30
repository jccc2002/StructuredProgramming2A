#include <stdio.h>
#include <stdlib.h>


typedef struct utils{
    int myInt;
    void (*ShowIntAddress) (int* param);
    // void (*swapF) (int* n1, int*n2);
    void (*mostrarDireccion) (int* param);
    void (*modifyVariablesAddress) (int* ptr1, int* ptr2);
 }UTILS;  


typedef struct Array{
    int dirArray[2];
    float aFloat;
    float * aFloatPointer;
}Array;

// void swapF (int* n1, int*n2){
//     int n3;
//     n3 = *n1;
//     *n1 = *n2;
//     *n2 = n3;
//     return;
// }

// void SwapGlobal(){
//     int temp = myVar1;
//     myVar1 = myVar2;
//     myVar2 = temp;
//     return;

void sayHello(char message[]){
    printf("%s\n", message);

}

int addTwoNumbers(int argument1,int argument2){
    int result = argument1 + argument2;
    return result; 
}

void ShowIntAddress(int* param){
    printf("address var1: %p \n", param);
}

// void swapF (int* n1, int*n2){
//     int n3;
//     n3 = *n1;
//     *n1 = *n2;
//     *n2 = n3;
//     return;
// }



void intValueAddress(int* ptr1, int* ptr2){
    *ptr1 = *ptr1 * 2;
    *ptr2 = *ptr2 * 2;
    return;
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


void fillArray(int array[], size_t tam){
    for (size_t i = 0; i < tam; i++){
        array[i] = i*2;
    }
    return;
}




void printArray1D(int array[], size_t tam){
    for (size_t i = 0; i < tam; i++){
        printf("%i\n", array[i]);
    }
    return;
}




Array* returnArray( ){
    Array* unArrayType = (Array*)malloc(sizeof(Array));
    printf("address unArrayType: %p, unArrayType = %p\n", &unArrayType, unArrayType);

    //malloc(), realloc(), calloc(), free()//

    unArrayType->dirArray[0] = 17;
    unArrayType->dirArray[1] = 15;
    unArrayType->dirArray[2] = 19;
    return unArrayType;
}