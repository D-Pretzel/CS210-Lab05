/** lab05functs.c
* ===========================================================
* Name: David Petzold
* Section: T6/7
* Project: Lab 5
* Purpose: Learn function prototypes, user-defined functions,
*          return values, and parameters.
* ===========================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lab05functs.h"
# define M_PI 3.14159265358979323846

double degreesToRadians(int angleDegrees){
    double j;

    j = M_PI * (angleDegrees / 180.0);

    return j;

}

void printLine(void){

    printf(" 0\t%.3f\t%.3f\n", sin(degreesToRadians(0)), cos(degreesToRadians(0)));
    printf("15\t%.3f\t%.3f\n", sin(degreesToRadians(15)), cos(degreesToRadians(15)));
    printf("30\t%.3f\t%.3f\n", sin(degreesToRadians(30)), cos(degreesToRadians(30)));
    printf("45\t%.3f\t%.3f\n", sin(degreesToRadians(45)), cos(degreesToRadians(45)));
    printf("90\t%.3f\t%.3f\n", sin(degreesToRadians(90)), cos(degreesToRadians(90)));

}
