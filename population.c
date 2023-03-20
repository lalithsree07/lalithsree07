#include <cs50.h>
#include <stdio.h>

int main()
{
    int startSize;
    do
    {
        startSize = get_int("enter the start size: ");
    }
    while(startSize < 9);
    int end;
    do
    {
        end = get_int("enter the end size: ");
    }
    while(end < startSize);
    int year = 0;
    int population = startSize;

    int gain;
    while(population < end)
    {
        gain = population / 3 - population / 4;
        population = population + gain;
        year++;
    }

    printf("Year: %i\n", year);
}
