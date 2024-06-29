/**
 * @file 014.c
 * @author Italo Thiago
 * @brief Write a program that converts a temperature entered into °C and convert it to °F 
 * @version 0.1
 * @date 2024-06-24
 */
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float celsius = 0, fahrenheit = 0;

    printf("Enter the temperature in °C: ");
    scanf("%f", &celsius);

    fahrenheit = ((celsius * 9) / 5) + 32;
    printf("The temperature of %.1f°C corresponds to %.1f°F", celsius, fahrenheit);

    return 0;
}