#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "swap.h"


int main(int argc, char** argv){

    int otroInt = 9;
    int int2 = 13;


    UTILS myStructC = {1, ShowIntAddress, mostrarDireccion, modifyVariablesAddress};
    printf("myInt: %d. &myStructC: %p\n", myStructC.myInt, &myStructC);
    UTILS* myStructP = &myStructC;s
    printf("myInt: %d\n", myStructP->myInt);
    printf("myInt: %d\n", (*myStructP).myInt);

    myStructC.ShowIntAddress(&otroInt);

    myStructC.ShowIntAddress(&otroInt);
    myStructC.mostrarDireccion(&otroInt);
    myStructC.modifyVariablesAddress(&otroInt,&int2);
    printf("int= %i \n int2 = %i \n",otroInt,int2);

    // UTILS myStructC = &swapF;
    // printf("myInt: %f\n", myStructP->Swap);

    return 0;   
}