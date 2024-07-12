/**
 * @file 029.c
 * @author Italo Thiago 
 * @brief Desenvolva um programa que leia o comprimento de três retas e diga ao usuário se elas podem ou não formar um triângulo.
 * @version 0.1
 * @date 2024-07-02
 */
#include <stdio.h>

int IsTriangle(float lineOne, float lineTwo, float lineThree)
{
    char result[100];

    float sumOne = lineOne + lineTwo;
    float sumTwo = lineTwo + lineThree;
    float sumThree = lineThree + lineOne;
    if (sumOne >= sumTwo || sumTwo >= sumThree || sumOne >= sumThree)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    float segmentOne = 0, segmentTwo = 0, segmentThree = 0;

    printf("Primeiro segmento: ");
    scanf("%f", &segmentOne);
    fflush(stdin);

    printf("Segundo segmento: ");
    scanf("%f", &segmentTwo);
    fflush(stdin);

    printf("Terceiro segmento: ");
    scanf("%f", &segmentThree);
    fflush(stdin);

    if (IsTriangle(segmentOne, segmentTwo, segmentThree) == 0)
    {
        printf("Os segmentos NAO podem formar um triangulo!\n");
    }
    else
    {
        printf("Os segmentos PODEM formar um triangulo!\n");
    }

    return 0;
}