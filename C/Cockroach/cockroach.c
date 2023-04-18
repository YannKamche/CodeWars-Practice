/*
The cockroach is one of the fastest insects. 
Write a function which takes its speed in km per hour and 
returns it in cm per second, rounded down to the integer (= floored).

For example:

1.08 --> 30
Note! The input is a Real number (actual type is language dependent) and is >= 0. 
The result should be an Integer.
*/

#include <stdio.h>
#include <math.h>

//funtion declaration
double getSpeed_Kmh();
int returnSpeed_Cms();

int main() 
{
    int result = returnSpeed_Cms();
    printf("%d", result);
    return 0;
}

//function definition
double getSpeed_Kmh() {
    double speed;
    printf("Enter the speed of the cockroach (Km/h): ");
    scanf("%lf", &speed);
    return speed;
}
int returnSpeed_Cms() {

    double speed = getSpeed_Kmh();
    int newSpeed;
    newSpeed = floor((speed* 10e4)/3600);
    return newSpeed;
}
