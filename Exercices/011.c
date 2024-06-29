/**
 * @file 011.c
 * @author Italo Thiago 
 * @brief Make a program that reads of a wall in meters, calculates its area and the amount of paint needed to paint it, knowing that each liter of paint paints an area of 2m²
 * @version 0.1
 * @date 2024-06-24
 */
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float width = 0, height = 0, area = 0, paint = 0;

    printf("Wall width: ");
    scanf("%f", &width);

    fflush(stdin);
    printf("Wall height: ");
    scanf("%f", &height);

    area = width * height;
    printf("Your wall has a dimension of %.2fx%.2f and its area is %.3fm².\n", width, height, area);

    paint = area / 2;
    printf("To paint this wall, you will need %.4fl of paint.\n", paint);


    return 0;
}