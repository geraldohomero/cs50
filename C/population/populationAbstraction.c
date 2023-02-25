#include <cs50.h>
#include <stdio.h>

int calculate_population(int initial_population, int years)
{
    while (years > 0)
    {
        initial_population = initial_population + (initial_population / 3) - (initial_population / 4);
        years--;
    }
    return initial_population;
}

int main(void)
{
    int initial_population = get_int("Enter the initial population size: ");
    while (initial_population < 9)
    {
        initial_population = get_int("Enter a valid initial population size (at least 9): ");
    }

    int target_population = get_int("Enter the target population size: ");
    while (target_population < initial_population)
    {
        target_population = get_int("Enter a valid target population size (greater than or equal to initial population): ");
    }

    int years = 0;
    int population = initial_population;

    while (population < target_population)
    {
        population = calculate_population(population, 1);
        years++;
    }

    printf("It will take %i years\n", years);
}