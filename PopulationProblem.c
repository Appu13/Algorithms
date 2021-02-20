/*
In a small town the population is p0 at the beginning of a year. 
The population regularly increases by certain percent per year and moreover aug new inhabitants per year come to live in the town. 
How many years does the town need to see its population greater or equal to p inhabitants?
*/

#include <stdio.h>
int nbYear(int p0, double percent, int aug, int p)
{
    // Declaring the local variables

    // Year count
    int years = 0;
    //Population at each stage
    int population = p0;
    //Converting the population into percentage
    percent = percent / 100;

    // Repeate till we get the desierd population percentage
    while (population < p)
    {
        population += (population * percent) + aug;
        years += 1;
    }

    return years;
}
