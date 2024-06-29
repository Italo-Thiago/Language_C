/**
 * @file 017.c
 * @author Italo Thiago
 * @brief White a program that reads the length of the opposite and adjacent sides of a right triangle, calculates and displays the length os the hypotenuse. 
 * @version 0.1
 * @date 2024-06-24
 */
#include <stdio.h>
#include <math.h>

int main()
{
    float opposite = 0, adjacent = 0, hypotenuse = 0;

    printf("Opposite leg length: ");
    scanf("%f", &opposite);

    fflush(stdin);
    printf("Adjacent side length: ");
    scanf("%f", &adjacent);

    hypotenuse = hypot(opposite, adjacent);

    printf("The hypotenuse will measure: %.2f", hypotenuse);

    return 0;
}