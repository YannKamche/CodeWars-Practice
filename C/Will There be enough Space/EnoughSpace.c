/*
The Story:
Bob is working as a bus driver. However, he has become extremely popular amongst the city's residents. With so many passengers wanting to get aboard his bus, he sometimes has to face the problem of not enough space left on the bus! He wants you to write a simple program telling him if he will be able to fit all the passengers.

Task Overview:
You have to write a function that accepts three parameters:

cap is the amount of people the bus can hold excluding the driver.
on is the number of people on the bus excluding the driver.
wait is the number of people waiting to get on to the bus excluding the driver.
If there is enough space, return 0, and if there isn't, return the number of passengers he can't take.

Usage Examples:
cap = 10, on = 5, wait = 5 --> 0 # He can fit all 5 passengers
cap = 100, on = 60, wait = 50 --> 10 # He can't fit 10 of the 50 waiting
*/

#include <stdio.h>

//function declaration
int availableSpace(int ,int ,int);

int main()
{
   
    printf("Number of people bus can hold: ");
    int cap;
    scanf("%d", &cap);

    printf("\nNumber of people on the bus: ");
    int on;
    scanf("%d", &on);

    printf("\nNumber of people waiting: ");
    int wait;
    scanf("%d", &wait);

    int result;
    result = availableSpace(cap, on, wait);

    if(result == 0)
        printf("He can fit all %d passengers", wait);
    else
        printf("He can't fit %d of the %d waiting", result, wait);

    return 0;
}

//function definition
int availabeSpace(int cap, int on, int wait)
{
    if((on + wait) == cap)
    {
         return 0;
    }
       
    else
        return ((on + wait) - cap);
}