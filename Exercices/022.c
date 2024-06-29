/**
 * @file 022.c
 * @author Italo Thiago
 * @brief Write a program that reads a number from 0 to 9999 and displays each fo the separate digits on the screen
 * @version 0.1
 * @date 2024-06-28
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char number[12];
    char categories[12][20] = {{"Unit"}, {"Ten"}, {"Hundred"},
                               {"Thousand Unit"}, {"Ten of Thousands"}, {"Hundred of Thousands"},
                               {"Million Unit"}, {"Ten of a Million"}, {"Hundred of Million"},
                               {"Billion Unit"}, {"Ten of Billion"}, {"Hundred Billion"}};
                               
    printf("Enter a number: ");
    scanf("%s", number);

    if (strlen(number) >= 12)
    {
        printf("The program only accepts numbers smaller than 12");
        return 1;
    }
    else
    {

        for (int i = 0; i < strlen(number); i++)
        {
            int digit = number[i] - '0';
            printf("%s: %d\n", categories[i], digit);
        }

        return 0;
    }
}