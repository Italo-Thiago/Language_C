/**
 * @file 028.c
 * @author Italo Thiago 
 * @brief Faça um programa que leia três números e mostre qual é o maior e qual é o menor 
 * @version 0.1
 * @date 2024-07-02
 */
#include <stdio.h>
#include <string.h>

float BiggerNumber(float sequence[], int size)
{
    float bigger = 0;
    for (int i = 0; i < size; i++)
    {
        if (sequence[i] >= bigger)
        {
            bigger = sequence[i];
        }
    }
    return bigger;
}

float SmallerNumber(float sequence[], int size)
{
    float smaller = __FLT_MAX__;
    for (int i = 0; i < size; i++) 
    {
        if (sequence[i] <= smaller && smaller != 0)
        {
            smaller = sequence[i];
        }
    }
    return smaller;
}

int main()
{
    float numbers[3];

    printf("Primeiro valor: ");
    fflush(stdin);
    scanf("%f", &numbers[0]);

    printf("Segundo valor: ");
    fflush(stdin);
    scanf("%f", &numbers[1]);

    printf("Terceiro valor: ");
    fflush(stdin);    
    scanf("%f", &numbers[2]);

    printf("O menor valor digitado foi %.2f\n", SmallerNumber(numbers, 3));
    
    printf("O maior valor digitado foi %.2f\n", BiggerNumber(numbers, 3));

    return 0;
}