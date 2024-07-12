/**
 * @file 040.c
 * @author Italo Thiago
 * @brief Write a program that calculates the sum of all odd numbers that are multiples of three and that lie in the range from 1 to 500.
 * @version 0.1
 * @date 2024-07-09
 */
#include <stdio.h>

int main()
{
    int number = 1, sum = 0, i = 1, total = 0;

    while (i < 501)
    {
        if (number % 3 == 0 && number % 2 == 1)
        {
            sum = sum + number;
            // printf("%d ", number);
            total++;
        }
        number++;
        i++;
    }

    printf("The sum of all requested %i values is %i", total, sum);

    return 0;
}