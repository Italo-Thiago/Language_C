/**
 * @file 044.c
 * @author Italo Thiago
 * @brief Write a program that reads an integer and tells you whether or not it is a prime number 
 * @version 0.1
 * @date 2024-07-10
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// O programa possui um erro ao contabilizar 25 por exemplo.

int main()
{
    
    system("cls");
    
    int number = 0, counter = 0;

    printf("Enter a number: ");
    scanf("%i", &number);

    if (number < 2)
    {
        printf("The number %i is NOT a PRIME!\n", number);
        return 0;
    }

    for(int i = 1; i <= sqrt(number); i++)
    {
        if(number % i == 0)
        {
            if(i == number / 1)
                counter++;
            else
                counter += 2;
        }
    }
    
    printf("The number %i was divisible %i times.\n", number, counter);
    
    if(counter == 2)
    {
        printf("And that's why he's a COUSIN!");
    }
    else
    {
        printf("And that's why he's NOT a COUSIN!");
    }

    return 0;
}