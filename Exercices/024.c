/**
 * @file 024.c
 * @author Italo Thiago
 * @brief Write a program that reads a person's full name and then shows the first and last names separately 
 * @version 0.1
 * @date 2024-06-29
 */
#include <stdio.h>
#include <string.h>

char *LastName(char *completeName)
{
    // Cria um ponteiro que armazena o ultimo espaço encontrado antes do último nome.
    char *lastSpace = strrchr(completeName, ' '); 
    int count = 0;

    // Se o lastSpace tiver um espaço, pega o primeiro caractere do último nome.
    if (lastSpace != NULL)
    {
        // retorna o último nome
        return lastSpace + 1;
    }
    else
    {   
        // caso contrário retorna o mesmo nome passado.
        return completeName;
    }
}

int main()
{
    char name[200];

    printf("Enter your full name: ");
    // Armazena todos os caracteres, inclusive os espaços
    fgets(name, sizeof(name), stdin);
    // Troca o caractere de troca de linha por '\0' que e o fim da palavra.
    name[strcspn(name, "\n")] = '\0';

    printf("Very nice to meet you.\n");

    // Faz uma cópia do nome, para quando chamar a função LastName 
    char nameCopy[200];
    strcpy(nameCopy, name);

    // firstName recebe a copia do nome, que foi dividido em sequências delimitadas pelo espaço.
    char *firstName = strtok(nameCopy, " ");
    printf("Your first name is %s.\n", firstName);

    // Chama a função LastName, e imprime o último nome.
    char *lastName = LastName(name);
    printf("His last name is %s.\n", lastName);

    return 0;
}