#include <stdio.h>

void swapF (int* n1, int*n2){
    int n3;
    n3 = *n1;
    *n1 = *n2;
    *n2 = n3;
    return;
}
