#include <stdio.h>
#include "./headerPractice.h"

int myNumber = 3;
float myFloat = 3.1416;
char myString[255] = "Hola mundo";

//Declarar y definirla
//void sayHello(char message[]){
   // printf("%s\n", message);

//}

//Segundo método para funciones

//1. Declarar

//void sayMyname(char message []);

//int addTwoNumbers(int argument1,int argument2); //Declarando;

int main( ){
    
    sayHello("Hello world");
    sayMyname("Jorge");
    int myResult = addTwoNumbers(2,5);
    printf("myResult is equal to: %d \n", myResult);

    printf("%d \n", libInteger);
    return 0;
}

//2 Definir
//void sayMyname(char message[]){
//    printf("%s\n", message);
//}

//int addTwoNumbers(int argument1,int argument2){
  //  int result = argument1 + argument2;
    //return result; 
//}