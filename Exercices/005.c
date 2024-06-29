/**
 * @file 005.c
 * @author Italo Thiago 
 * @brief Write a program that reads an integer and displays its successor and predecessor 
 * @version 0.1
 * @date 2024-06-22
 */
#include <stdio.h>

int main()
{
    int number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The predecessor is %d\n", --number);

    printf("The successor is %d\n", number + 2);

    return 0;
}