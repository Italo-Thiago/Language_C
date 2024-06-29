/**
 * @file 004.c
 * @author Italo Thiago  
 * @brief Write a program that reads something from the keyboard and shows the primitive type, and all possible information about it an the screen. 
 * @version 0.1
 * @date 2024-06-21
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>

bool IsCapitalized(const char *str)
{
    if (islower(str[0])) return false;
    if (isdigit(str[0])) return false;
    
    for (int i = 1; str[i]; i++)
    {
        if(isupper(str[i])) return false;
    }
    return true;
}

char* TheTypeCanBe(const char *str)
{
    char *endptr;

    long val = strtol(str, &endptr, 10);

    if (endptr != str && *endptr == '\0' && val >= INT_MIN && val <= INT_MAX)
    {
        return "int";
    }

    endptr = NULL;

    double dval = strtod(str, &endptr);

    if (endptr != str && (*endptr == '\0' || *endptr == 'f'))
    {
        return "float/double";
    }

    if (strlen(str) == 1)
    {
        return "char";
    }

    return "string";
}

int main()
{
    char word[20];

    printf("Type something? ");
    scanf("%s", &word);

    // 1. Qual o tipo de dado, Mudado para retornar o tamanho do tipo.
    printf("The type is: %s\n", TheTypeCanBe(word));

    // 2. Sé tem espaços
    printf("There are only spaces? %s\n", isspace(word[0]) ? "True" : "False");

    // 3. É um número?
    printf("It's a number? %s\n", isdigit(word[0]) ? "True" : "False");
    
    // 4. É alfabético?
    printf("It's alphabetical? %s\n", isalpha(word[0]) ? "True" : "False");

    // 5. É alfanumérico?
    printf("It is alphanumeric? %s\n", isalnum(word[0]) ? "True" : "False");

    // 6. Está em minúsculo?
    printf("It's in capital letters? %s\n", isupper(word[0]) ? "True" : "False");

    // 7. Está em maiúsculo?
    printf("It's in lowercase? %s\n", islower(word[0]) ? "True" : "False");

    // 8. Está capitalizado?
    printf("It is capitalized? %s\n", IsCapitalized(word) ? "True" : "False");

    return 0;
}