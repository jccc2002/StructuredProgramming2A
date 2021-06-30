#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "swap.h"


int main(int argc, char** argv){

    int otroInt = 9;

    UTILS myStructC = {1, ShowIntAddress, swapF};
    printf("myInt: %d. &myStructC: %p\n", myStructC.myInt, &myStructC);
    UTILS* myStructP = &myStructC;
    printf("myInt: %d\n", myStructP->myInt);
    printf("myInt: %d\n", (*myStructP).myInt);

    myStructC.ShowIntAddress(&otroInt);

    // UTILS myStructC = &swapF;
    // printf("myInt: %f\n", myStructP->Swap);

    return 0;   
}