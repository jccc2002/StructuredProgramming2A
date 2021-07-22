#include <stdio.h>
#include <stdlib.h>

int i;
float add = 0;
float a = 0;
float avg = 0;

int main(int argc, char* argv[]){

    for (i=1; i< argc; i++){
        a = atof(argv[i]);
        add += a;
        avg = (add)/i;
    if (i==(argc-1)){
    printf("The average: %.3f\n",avg);
    }

    }


    return 0;
}