#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "stdbool.h"

#include "swap.h"



void callTonumber(int number){
    //Logic
    printf("Calling %d...\n", number);
}
void Securitycamera(void (*callTonumber)(int number), int EmergencyNumber);

int main(){
    // for(;;){
        Securitycamera(callTonumber,911);
    


    return 0;
}

void Securitycamera(void (*callTonumber)(int number), int EmergencyNumber){
    //Lógica compleja// 
    bool thief = true;
    if (thief){
        callTonumber(EmergencyNumber);
    } //Si detecta ladrón, debe hacer algo
}