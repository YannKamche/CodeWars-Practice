/*
Create a program that takes two doubles as inputs
Calculates the hypotenuse of a triangle and outputs it
*/

#include <stdio.h>
#include <math.h>

//function declaration
double side_Square(double);
double get_SideA();
double get_SideB();
double calc_SideC();

int main() 
{
    double result;
    result = calc_SideC();
    printf("The hypotenuse is: %f", result);
    return 0;
}

//function definition
double side_Square(double side){
    return side * side;
}

double get_SideA() {
    printf("Enter side A: ");
    double A;
    scanf("%lf", &A);
    return A;
}

double get_SideB() {
    printf("Enter side B: ");
    double B;
    scanf("%lf", &B);
    return B;
}

double calc_SideC(){
    double C = sqrt(side_Square(get_SideA()) + side_Square(get_SideB()));
    return C;
}