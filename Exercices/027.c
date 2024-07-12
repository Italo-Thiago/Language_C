/**
 * @file 027.c
 * @author Italo Thiago
 * @brief Faça um programa que leia um ano qualquer e mostre se ele é BISSEXTO.
 * @version 0.1
 * @date 2024-07-01
 */
#include <stdio.h>

int AnoEBissexto(int number)
{
    return number % 4 == 0 && number % 100 != 0 || number % 400 == 0;
}

int main()
{
    char input[10];
    int year = 0;

    printf("Que ano voce quer analisar?: ");
    fgets(input, sizeof(input), stdin);

    if (sscanf(input, "%d", &year) != 1)
    {
        puts("Não pode ser uma letra.");
        return 1;
    }

    if (AnoEBissexto(year) == 1)
    {
        printf("O ano %d e Bissexto.", year);
    }
    else 
    {
        printf("O ano %d NAO e Bissexto.", year);
    }


    return 0;
}