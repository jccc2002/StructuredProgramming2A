#include <stdio.h>

int myNumber = 3;
float myFloat = 3.1416;
char myString[255] = "Hola mundo";

//Declarar y definirla
void sayHello(char message[]){
    printf("%s\n", message);

}

//Segundo método para funciones

//1. Declarar

void sayMyname(char message []);



int main( ){

    sayHello("Hello world");
    sayMyname("Jorge");
    return 0;
}

//2 Definir
void sayMyname(char message[]){
    printf("%s\n", message);
}