#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int initial_population;
    do
    {
        initial_population = get_int("Enter the initial population size: ");
    }
    while (initial_population < 9);

    int target_population;
    do
    {
        target_population = get_int("Enter the target population size: ");
    }
    while (target_population < initial_population);

    int years = 0;

    while (initial_population < target_population)
    {
        initial_population = initial_population + (initial_population / 3) - (initial_population / 4);
        years++;
    }

    printf("It will take %i years \n", years);
}
