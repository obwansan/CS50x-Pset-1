#include <stdio.h>
#include <cs50.h>

/**
* Implement a program that reports a user’s water usage, converting minutes spent in the shower 
to bottles of drinking water.
**/

int main(void)
{
    // prompt user for length of shower in minutes
    printf("How many minutes did you spend in the shower today?\n");

    // get user input
    int minutes = get_int();
    // scanf("%i", minutes);

    // calculate equivalent number of bottles
    int bottles = minutes * 12;

    // print equivalent number of bottles
    printf("Bottles used: %i\n", bottles);
}