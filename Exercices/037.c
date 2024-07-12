/**
 * @file 037.c
 * @author Italo Thiago
 * @brief Develop logic that reads a person's weight and height, calculates their IMC and shows their status. 
 * @version 0.1
 * @date 2024-07-07
 */
#include <stdio.h>

int main()
{
    float weight = 0, height = 0;

    printf("What is your weight? (kg): ");
    fflush(stdin);
    scanf("%f", &weight);

    printf("What is your height? (m): ");
    fflush(stdin);
    scanf("%f", &height);

    float imc = weight / (height * 2);
    if (imc < 17)
    {
        printf("The IMC is equal to: %2.f.\n", imc);
        printf("It's in the category: Far below ideal weight");
    }
    else if (imc == 17 || imc < 18.49)
    {
        printf("The IMC is equal to: %2.f.\n", imc);
        printf("It's in the category: Under weight");
    }
    else if (imc == 18.5 || imc < 24.99)
    {
        printf("The IMC is equal to: %2.f.\n", imc);
        printf("It's in the category: Normal weight");
    }
    else if (imc == 25 || imc < 29.99)
    {
        printf("The IMC is equal to: %2.f.\n", imc);
        printf("It's in the category: Overweight");
    }
    else if (imc == 30 || imc < 34.99)
    {
        printf("The IMC is equal to: %2.f.\n", imc);
        printf("It's in the category: Obesity grade I");
    }
    else if (imc == 35 || imc < 39.99)
    {
        printf("The IMC is equal to: %2.f.\n", imc);
        printf("It's in the category: Obesity grade II");
    }
    else if (imc <= 40)
    {
        printf("The IMC is equal to: %2.f.\n", imc);
        printf("It's in the category: Obesity grade III");
    }

    return 0;
}