#include <stdio.h>
#include <cs50.h>

/**
* Implement a program that prints out a half-pyramid of a specified height
**/

int main(void)
{
    // have to declare height variable globally
    int height;

    // prompt the user for valid input
    do
    {
        printf("Enter a number between 1 and 23\n");
        height = get_int();
    }
    while (height < 0 || height > 23);

    // space variable can only be set after height variable
    int spaces = height - 1;

    // for each row
    for (int i = 0; i < height; i++)
    {
        // print spaces
        for (int j = 0; j < spaces; j++)
        {
            printf("%c", ' ');
        }
        // declare hashes variable
        int hashes = i + 2;

        // print hashes
        for (int k = 0; k < hashes; k++)
        {
            printf("%c", '#');
        }
        // print new line
        printf("\n");

        // decrement spaces
        spaces--;
        // increment hashes
        hashes++;
    }

    return 0;
}