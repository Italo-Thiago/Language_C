/**
 * @file 045.c
 * @author Italo Thiago
 * @brief Create a program that reads any sentence and tells you if it is a palindrome, disregarding spaces. 
 * @version 0.1
 * @date 2024-07-11
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *Reverse(char *name)
{
    int length = strlen(name);
    int c, i , j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        c = name[i];
        name[i] = name[j];
        name[j] = c;
    } 

    return name;
}

int main()
{
    system("cls");

    char name[101];

    printf("Enter the phrase: ");
    fgets(name, sizeof(name), stdin);

    // Upper name
    char nameUpper[101];
    int length = strlen(name);
    for(int i = 0; i < sizeof(name); i++)
    {
        nameUpper[i] = toupper(name[i]);
    }
    nameUpper[length] = '\0';

    // Remove spaces
    char nameNoSpace[101];
    int position = 0;
    for(int i = 0; i < length; i++)
    {
        if (nameUpper[i] != ' ' && nameUpper[i] != '\n')
        {
            nameNoSpace[position] = nameUpper[i];
            position++;
        }
    }
    nameNoSpace[position] = '\0';

    char auxiliar[101];
    strcpy(auxiliar, nameNoSpace);

    // Reverse name
    char *nameReverse = Reverse(nameNoSpace);

    printf("The inverse of %s is equal to %s.\n", auxiliar, nameReverse);

    if(strcmp(auxiliar, nameReverse) == 0)
    {
        printf("The typed phrase is a PALINDROME.\n");
    }
    else
    {
        printf("The typed phrase NOT is a palindrome.\n");
    }

    return 0;
}