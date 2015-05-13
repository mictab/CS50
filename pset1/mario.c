#include <stdio.h>
#include <cs50.h>

/**
* mario.c
* This program prints out a Mario pyramid
* Made by Michel Tabari
*/

int main(void)
{

    // declaring variables to be used
    int height, space, hash, rows;

    // get user input
    do
    {
        printf("Welcome to the Mario pyramide. Please choose a height: ");
        height = GetInt();
    }

    // check that the input satisfies the requirements
    while (height < 0 || height > 23);

    // for-loop to make rows
    for (rows = 1; rows <= height; rows++)
    {
        // for-loop to make spaces in front of hashes
        for (space = (height - rows); space > 0; space--)
        {
            printf(" ");
        }
    
        // for-loop to print out the hashes
        for (hash = 0; hash <= rows; hash++)
        {
            printf("#");
        }
        // for every turn in the row-for-loop, print out a new line
        printf("\n");
    }
}
