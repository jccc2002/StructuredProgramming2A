#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "stdbool.h"

#include "swap.h"



void callTonumber(int number){
    //Logic
    printf("Calling %d...\n", number);
}

void sendMessageNumber(int number){
    printf("sending message to %d \n...",number);
}

void Securitycamera(void (*cb)(int number), int EmergencyNumber);

int main(){
    // for(;;){
        Securitycamera(callTonumber,911);
        Securitycamera(sendMessageNumber,911);
    


    return 0;
}

void Securitycamera(void (*cb)(int number), int EmergencyNumber){
    //Lógica compleja// 
    bool thief = false;
    if (thief){
        cb(EmergencyNumber);
    } //Si detecta ladrón, debe hacer algo
}

