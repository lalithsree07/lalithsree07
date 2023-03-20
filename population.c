#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years

    int start = 0;
    int end = 0;
    do
    {
        start = get_int("Start Size: ");
    }
    while (start < 9);

    do
    {
        end = get_int("End Size: ");
    }
    while (end < start);

    int years = 0;

    while (start < end)
    {
        years++;
        start = start + (start / 3 - start / 4);
    }
    printf("Years: %i\n", years);
}
