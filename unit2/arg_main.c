#include <stdio.h>



int my_int = 0; //%i o %d
float my_float = 3.14; // %f
char my_char = 'c'; //%c
char my_str[10] = "hola"; //%s



float second_float = 0.0;

//Pointer//
int * my_prt_int = &my_int; //%p



int main(int argc, char** argv){

    strcpy(my_str, argv[1]);
    int num = atoi(argv[1]);
    printf("num: %i", num)

    printf("myint: %i , my_float: %f , my_char: %c , my_str: %s , my_ptr_int: %p.\n", my_int, my_float, my_char, my_str, my_prt_int);
    printf("argc: %i, element 1: %s, elem2: %s char. %c \n", num, argv[2], 'J');

    return 0;
}