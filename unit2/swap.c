#include <stdio.h>
#include "swap.h"


int main(){
    int num1, num2;
    printf("Enter values for num1 and num2\n");
    scanf("%d%d", &num1, &num2);
    swapF (&num1, &num2);
    printf("num1 = %d and num2 = %d\n", num1, num2);

    return 0;
}