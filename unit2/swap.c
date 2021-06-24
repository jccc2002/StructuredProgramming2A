#include <stdio.h>
#include "swap.h"


int main(){
    int num1, num2;
    printf("Enter values for num1 and num2\n");
    scanf("%d%d", &num1, &num2);
    swapF (&num1, &num2);
    printf("num1 = %d and num2 = %d\n", num1, num2);

    

    // int myVar1 = 30;
    // int myVar2 = 50;

    // swap(&var1, &var2);
    // SwapGlobal();
    // printf("myVar1= %d, myVar2= %d\n", myVar1, myVar2);


    return 0;
}



