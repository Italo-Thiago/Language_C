/**
 * @file 041.c
 * @author Italo Thiago
 * @brief Create a program that shows the multiplication table the user requests 
 * @version 0.1
 * @date 2024-07-09
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int number = 0, multi = 0, result;

    printf("Enter a number to see your multiplication table: ");
    scanf("%i", &number);
    fflush(stdin);

    printf("Enter how many multiplication operations will be performed: ");
    scanf("%i", &multi);
    fflush(stdin);

    multi += 1;

    for(int i = 1; i < multi; i++)
    {
        result = number * i; 
        printf("%d x %d = %d\n", number, i, result);
    }

    return 0;
}