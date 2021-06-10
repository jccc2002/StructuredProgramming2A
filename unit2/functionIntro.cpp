#include <iostream>
#include <tuple>

std::string myString = "Hola juan";
int myNumber = 3;
float myFloat = 3.1416;

std::tuple<int, std::string> myTuple = {1,"string"};

//Declaring = ";"
void sayHello(std::string tag1);


int main(){

    sayHello(myString);

    return EXIT_SUCCESS;
}

//Defining = "{}"
void sayHello(std::string tag1){
    std::cout << tag1 << std::endl;
}