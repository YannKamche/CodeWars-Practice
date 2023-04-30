/*
DESCRIPTION:
Complete the square sum function so that it squares 
each number passed into it and then sums the results together.

For example, for [1, 2, 2] it should return 9 because 
1^2 + 2^2 + 2^2 = 9
*/

#include <stdio.h>
int getNumnber();
int square(int);
int sum(int, int, int);

int main()
{   
    printf("The result is : %d", getNumber());
    return 0;
}

int getNumber()
{
    printf("Enter the three numbers: ");
    int num[3], i;
    for (i = 0; i < 3; i++ )
        scanf("%d", &num[i]);
    return sum(square(num[0]), square(num[1]), square(num[2]));
}

int square(int num)
{
    return num * num;
}

int sum(int num0, int num1, int num2)
{
    return num0 + num1 + num2;
}
