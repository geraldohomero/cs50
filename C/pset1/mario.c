#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Mario World\n");
    //get size of grid
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // int n = get_int ("Size: ");
    // while (n < 1)
    // {
    //     n = get_int("Size: ");
    // }


    // Print grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("#\n");
    }

}