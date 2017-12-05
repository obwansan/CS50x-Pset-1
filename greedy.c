#include <stdio.h>
#include <cs50.h>
#include <math.h>

/**
* Implement a program that calculates the minimum number of coins required to give a user change.
**/

int main(void)
{
    // keep track of number of coins to be returned
    int coins = 0;

    // get amount in dollars
    float dollars;
    do
    {
    	printf("O hai! How much change is owed?\n");
    	dollars = get_float();
    }
    while (dollars < 0);

    // convert float (dollars) to integer (cents) and round to prevent floating point imprecision
    int cents = round(dollars * 100);

    // always use the largest coin possible
    while (cents >= 25)
    {
        coins++;
        cents -= 25;
    }
    while (cents >= 10)
    {
        coins++;
        cents -= 10;
    }
    while (cents >= 5)
    {
        coins++;
        cents -= 5;
    }
    while (cents >= 1)
    {
        coins++;
        cents -= 1;
    }
    // print final number of coins used
    printf("%i\n", coins);

    return 0;
}