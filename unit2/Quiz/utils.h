#include <stdio.h>
#include <stdlib.h>

typedef struct robot{
    char* name;
    char* type;
    float height;
    float weight;
    int degreesOfFreedom;

    void (*sayHelloToRobot)(struct robot);
}ROBOT;

void sayHelloToRobot(ROBOT robot){
    printf("Hello %s\n", robot.name);
}