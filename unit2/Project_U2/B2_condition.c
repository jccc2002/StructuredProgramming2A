#include <stdio.h>

int i;

int main(){
    printf("Numbers divisibles by 3 and 5 less than 100 \n");
    for (i=1; i<=100; i++){
        if (i%3==0){
            if (i%5==0){
                printf("%d \n", i);
            }
        }
            
    }
    return 0;
}