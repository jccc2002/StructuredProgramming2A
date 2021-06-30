#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "swap.h"

typedef struct operator{
    float health;
    int armor;
    char* operator_name;

}OPERATOR;

typedef struct damage{
    int head;
    int chest;
    int body;
}DAMAGE;

int main(){
    OPERATOR Warzone_Game = {96.12, 250, "Rambo"};
    OPERATOR Warzone_Game2 = {50.56, 150, "Domino"};
    DAMAGE AK_47 = {52,48,35};
    DAMAGE PPSH = {40,35,33};

    printf("%f\n", Warzone_Game.health);
    printf("%d\n", Warzone_Game.armor);
    printf("%s\n", Warzone_Game.operator_name);

    printf("%d\n", AK_47.head);
    printf("%d\n", AK_47.chest);
    printf("%d\n", AK_47.body);


    return 0;
}