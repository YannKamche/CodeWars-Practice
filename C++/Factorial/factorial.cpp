/*
Calculate the factorial of a number
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// function declaration
void get_userNumber();
int calc_factorial(int);
void display_Result(int);

int main() {
    get_userNumber();
    return 0;
}

//function definition 
void get_userNumber() {
    cout << "Enter a number: " ;
    int num;
    cin >> num;
    display_Result(calc_factorial(num));
}

int calc_factorial(int num) {
    if(num <= 1)
        return 1;
    else
        return num * calc_factorial(num - 1);
}
void display_Result(int result) {
    cout << "The factorial is: " << result << endl;
}