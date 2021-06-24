#include <stdio.h>
#include <stdlib.h>


typedef struct Array{
    int dirArray;
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

Array* aFunction( ){
    Array* unArrayType = (Array*)malloc(sizeof(Array));
    unArrayType->dirArray[0] = 17;
    unArrayType->dirArray[1] = 15;
    unArrayType->dirArray[2] = 19;
    return unArrayType;
}