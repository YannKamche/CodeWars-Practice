/**
Function 2 - squaring an argument
Now you have to write a function that takes an argument and returns the square of it.
*/

#include <stdio.h>

//function declaration
double square(double);

int main() 
{
    printf("Enter the value of your choice: ");
    double value;
    scanf("%lf", &value);
    printf("The square of %f is : %f", value, square(value));
}

//function definition
double square(double value)
{
    return value * value;
}