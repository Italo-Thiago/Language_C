/**
 * @file 025.c
 * @author Italo Thiago
 * @brief Write a program that makes the computer "thinks" of an integer between 0 and 5 and ask the user to try to find out which number was chosen by the computer. The program should write on the tally whether the user won or lost. 
 * @version 0.1
 * @date 2024-06-30
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int number = 0;
    int numberChoice = 0;
    char input[10];

    puts("I will think of a number between 0 and 5. Try to guess..");
    
    printf("What number am I thinking about? ");
    fgets(input, sizeof(input), stdin);

    if (sscanf(input, "%d", &number) != 1)
    {
        printf("It must be a number and not a letter or symbol\n");
        return 1;
    }

    if (number >= 6)
    {
        printf("The program only works with numbers below 6");
        return 1;
    }
    
    if (number < 0)
    {
        printf("The program does not work with negative numbers");
        return 1;
    }

    numberChoice = rand() % 6;
    if (number == numberChoice)
    {
        puts("Congratulations, you discovered it");
    }
    else 
    {
        printf("Win! I thought of the number %d and not %d!\n", numberChoice, number);
    }

    return 0;
}