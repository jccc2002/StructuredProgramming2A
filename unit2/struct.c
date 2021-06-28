#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "swap.h"


int main(int argc, char** argv){

    int otroInt = 9;

    UTILS myStructC = {1, ShowIntAddress};
    printf("myInt: %d. &myStructC: %p\n", myStructC.myInt, &myStructC);
    UTILS* myStructP = &myStructC;
    printf("myInt: %d\n", myStructP->myInt);
    printf("myInt: %d\n", (*myStructP).myInt);

    myStructC.ShowIntAddress(&otroInt);

    return 0;   
}