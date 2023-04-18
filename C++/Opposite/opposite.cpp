/*
Very simple, given an integer or a floating-point number, find its opposite.

Examples:

1: -1
14: -14
-34: 34
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//function declaration
double getNumber();
void opposite();

int main()
{
    opposite();
    return 0;
}

//function definition
double getNumber() 
{
    double number;
    cout << "Enter the number: ";
    cin >> number;
    return number;
}
void opposite() 
{
    double initial = getNumber();
    double opposite = -1 * initial;
    cout << "Opposite of " << initial << ": " << opposite;
    return;
}