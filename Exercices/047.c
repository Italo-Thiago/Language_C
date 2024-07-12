/**
 * @file 047.c
 * @author Italo Thiago
 * @brief Make a program that reads the weight of five people. At the end, show the highest and lowest weight read. 
 * @version 0.1
 * @date 2024-07-11
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float weights[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Weight of %i person: ",i + 1);
        scanf("%f", &weights[i]);
        fflush(stdin);
    }

    float highNumber = 0, lowNumber = 0, auxiliar = 0;
    for(int i = 0; i < 5; i++)
    {
        highNumber = weights[i];
        if(highNumber > auxiliar)
        {
            auxiliar = weights[i];
        }
    }
    printf("The highest weight read was %.1fKg.\n", auxiliar);
    auxiliar = __FLT_MAX__;

    for(int i = 0; i < 5; i++)
    {
        lowNumber = weights[i];
        if(lowNumber < auxiliar)
        {
            auxiliar = weights[i];
        }
    }
    printf("The lowest weight read was %.1fKg.\n", auxiliar);

    return 0;
}