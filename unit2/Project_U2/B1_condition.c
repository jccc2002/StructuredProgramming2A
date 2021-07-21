#include <stdio.h>


char client;
int age = 0;


int main(){
    printf("Type your name: \n");
    scanf("%s", &client);

    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age < 18){
        printf("You are not allowed to continue. Please, leave the page. \n");
    }

    else{
        printf("Welcome again %s \n", &client);
    }
    

    return 0;
}