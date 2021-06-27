#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "swap.h"

//arrays


int myArray[5];

int myInt;



typedef struct mago{

    int vida;
    int mana;
    char* nombre;
    //más atributos//

    
}Mago;

// typedef struct mago Mago;




int main(){

    Mago juan = {100, 250, "Juan"};
    struct mago miguel = {500, 50, "Miguelito"};



    printf("%s\n",juan.nombre);

    fillArray(myArray, 5);
    printArray1D(myArray, 5);
    printf("%d", myArray[0]);
    printf("%d", myArray[1]);
    printf("%d", myArray[2]);
    printf("%d", myArray[3]);
    printf("%d", myArray[4]);

    Array* myArray = aFunction();
    printf("\n%d",myArray->dirArray[0] );
    printf("\n%d",myArray->dirArray[1] );
    printf("\n%d",myArray->dirArray[2] );

    return 0;
}   