/**
 * @file 018.c
 * @author Italo Thiago
 * @brief Write a program that reads any angle and displays on the screen the value of the sine, cosine and tangent of that angle
 * @version 0.1
 * @date 2024-06-25
 */
#include <stdio.h>
#include <math.h>

int main()
{
    float number = 0, radio = 0;
    float pi = 3.14159;

    printf("Enter the angle you want: ");
    scanf("%f", &number);

    radio = (number * pi) / 180; 

    printf("The angle of %.2f has the SINE of %.2f\n", number, sin(radio)); 

    printf("The angle of %.2f has the COSINE of %.2f\n", number, cos(radio));

    printf("The angle of %.2f has the TANGENT of %.2f\n", number, tan(radio));

    return 0;
}