/*
Opposites Attract
Timmy & Sarah think they are in love, 
but around where they live, they will only know once they pick a flower each. 
If one of the flowers has an even number of petals and 
the other has an odd number of petals it means they are in love.

Write a function that will take the number of petals of each 
flower and return true if they are in love and false if they aren't
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//function declaration
bool AreTheyInLove();
int petalNum(int);
int main()
{
    cout << "Is Timmy & Sarah in love? (1 is true and 0 is false) : " << AreTheyInLove();
    return 0;
}

//function definition
bool AreTheyInLove() 
{
    int flower1, flower2;
    cout << "Enter the number of petals of flower 1: ";
    cin >> flower1;

    cout << "Enter the number of petals of flower 2: ";
    cin >> flower2;
    if(petalNum(flower1) == petalNum(flower2))
        return true;
    else    
        return false;

}
int petalNum(int flower)
{
    return flower % 2;
}
