/**
 * @file 016.c
 * @author Italo Thiago
 * @brief Create a program that reads any Real number from the keyboard and display its entire portion on the screen. 
 * @version 0.1
 * @date 2024-06-24
 */
#include <stdio.h>

int main()
{
    float number = 0;

    printf("Enter a value: ");
    scanf("%f", &number);

    printf("The value entered was %f and its entire portion is %.0f", number, number);
    
    return 0;
}
