/**
 * @file 008.c
 * @author Italo Thiago
 * @brief Write a program that reads a value in meters and displays it converted into centimeters and millimeters 
 * @version 0.1
 * @date 2024-06-24
 */
#include <stdio.h>

int main()
{
    float meters = 0;

    printf("A distance in meters: ");
    scanf("%f", &meters);

    printf("Kilometer = %.3fkm\n", meters / 1000);

    printf("Hectometer = %.2fhm\n", meters / 100);

    printf("Decameter = %.1fdam\n", meters / 10);

    printf("Decimeter = %.0fdm\n", meters * 10);

    printf("Centimeter = %.0fcm\n", meters * 100);

    printf("Millimeter = %.0fmm\n", meters * 1000);

    return 0;
}