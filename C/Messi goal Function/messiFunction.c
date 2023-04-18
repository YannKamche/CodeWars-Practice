/*
Messi goals function
Messi is a soccer player with goals in three leagues:

LaLiga
Copa del Rey
Champions
Complete the function to return his total number of goals in all three leagues.

Note: the input will always be valid.

For example:

5, 10, 2  -->  17
*/ 

#include <stdio.h>

//Function declaration
int getGoaLaLiga();
int getGoalCopa();
int getGoalChampions();
int totalGoals();

int main() 
{
    printf("Messi Career goals. Number of goals in : \n");
    int result = totalGoals();
    printf("Total Messi's goal: %i", result);
    return 0;
}

//Function definition
int getGoalLaLiga() { 
    int goal_Liga;
    printf("La Liga: ");
    scanf("%i", &goal_Liga);
    return goal_Liga;
}

int getGoalCopa() {
    int goal_Copa;
    printf("Copa del Rey: ");
    scanf("%i", &goal_Copa);
    return goal_Copa;
}
int getGoalChampions() {
    int goal_Champ;
    printf("Champions League: ");
    scanf("%i", &goal_Champ);
    return goal_Champ;
} 
int totalGoals() {
    int total = getGoalLaLiga() + getGoalCopa() + getGoalChampions();
    return total;
}
