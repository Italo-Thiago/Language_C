/**
 * @file 042.c
 * @author Italo Thiago
 * @brief Develop a program that reads six integers and displays the sum of only those that are even. If the value entered is odd, disregard it. 
 * @version 0.1
 * @date 2024-07-10
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int numbers = 0, total = 0, evenNumber = 0;

    for(int i = 0; i < 6; i++)
    {
        printf("Enter the %i value: ", i + 1);
        fflush(stdin);
        scanf("%i", &numbers);

        if (numbers % 2 == 0)
        {   
            total += numbers;
            evenNumber++;
        }
    }

    printf("You entered %i EVEN numbers and the sum was %i", evenNumber, total);

    return 0;
}