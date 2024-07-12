/**
 * @file 026.c
 * @author Italo Thiago
 * @brief Crie um programa que leia um número inteiro e mostre na tala se ele é PAR ou IMPAR
 * @version 0.1
 * @date 2024-07-01
 */
#include <stdio.h>
#include <locale.h>

int EParOuImpar(int number)
{
    return number % 2;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int number = 0;
    char input[10];

    printf("Me diga um numero qualquer: ");
    fgets(input, sizeof(input), stdin);

    if (sscanf(input, "%d", &number) != 1)
    {
        printf("Não pode ser uma letra");
        return 1;
    }

    if (EParOuImpar(number) == 0)
    {
        printf("O numero %d e PAR", number);
    }
    else
    {
        printf("O numero %d e IMPAR", number);
    }

    return 0;
}