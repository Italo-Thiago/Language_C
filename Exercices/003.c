/**
 * @file 003.c
 * @author Italo Thiago
 * @brief Create a program that reads two numbers and displays the sum between them 
 * @version 0.1
 * @date 2024-06-21
 */

#include <stdio.h>

int main()
{
    int numberOne = 0, numberTwo = 0;

    printf("Enter a value: ");
    scanf("%d", &numberOne);

    printf("Enter another value: ");
    scanf("%d", &numberTwo);

    printf("The sum of %d and %d is equal to %d!\n", numberOne, numberTwo, numberOne + numberTwo);

    return 0;
}