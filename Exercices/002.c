/**
 * @file 002.c
 * @author Italo Thiago
 * @brief Write a program that reads a person's name and displays a welcome message
 * @version 0.1
 * @date 2024-06-21
 */

#include <stdio.h>

int main()
{
    char name[20];

    printf("Type your name.\n");
    scanf("%s", &name);

    printf("Nice to meet you, %s!\n", name); 

    return 0;
}