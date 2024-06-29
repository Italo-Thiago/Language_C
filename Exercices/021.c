/**
 * @file 021.c
 * @author Italo Thiago
 * @brief Create a program that reads a person's full name and displays:
 * @brief The name in all upper and lower case letters
 * @brief How many letters in total (not considering spaces)
 * @brief How many letters are in the first name
 * @version 0.1
 * @date 2024-06-28
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Analyzing your name...\n");

    char nameUpper[100];
    for (int i = 0; i < sizeof(name); i++)
    {
        nameUpper[i] = toupper(name[i]);
    }
    printf("Your name in capital letters is: %s\n", nameUpper);

    char nameLower[100];
    for (int i = 0; i < sizeof(name); i++)
    {
        nameLower[i] = tolower(name[i]);
    }
    printf("Your nama in lower case is: %s\n", nameLower);

    int position = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] != ' ')
        {
            position++;
        }
    }
    printf("Your name has a total of %d letters\n", position);

    char *firstName = strtok(name, " ");
    printf("His first name is %s an he has %d letters", firstName, strlen(firstName));

    return 0;
}