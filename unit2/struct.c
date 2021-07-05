#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "swap.h"


int a = 2;
int b = 4; 

int main(int argc, char** argv){

    int otroInt = 9;


    UTILS myStructC = {1, ShowIntAddress};
    printf("myInt: %d. &myStructC: %p\n", myStructC.myInt, &myStructC);
    UTILS* myStructP = &myStructC;
    printf("myInt: %d\n", myStructP->myInt);
    printf("myInt: %d\n", (*myStructP).myInt);

    myStructC.ShowIntAddress(&otroInt);

    // myStructC.ShowIntAddress(&otroInt);
    // myStructC.mostrarDireccion(&otroInt);
    // myStructC.modifyVariablesAddress(&otroInt,&int2);
    // printf("int= %i \n int2 = %i \n",otroInt,int2);

    UTILS obj;
    obj.myInt = 100;
    obj.mySwap = swap;

    obj.mySwap(&a, &b);
    printf("a:%d, b:%d", a,b);

    // UTILS myStructC = &swapF;
    // printf("myInt: %f\n", myStructP->Swap);

    return 0;   
}