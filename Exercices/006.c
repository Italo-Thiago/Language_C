/**
 * @file 006.c
 * @author Italo Thiago
 * @brief Create an algorithm that reads a number and displays its double, triple and square root 
 * @version 0.1
 * @date 2024-06-22
 */
#include <stdio.h>
#include <math.h>

int main()
{
    float number = 0;

    printf("Enter a number: ");
    scanf("%f", &number);

    printf("Double %.0lf is worth %.2lf.\n", number, number * 2);

    printf("Triple %.0lf is worth %.2lf.\n", number, number * 3);

    printf("The square root of %.0lf, is equal to %.2lf\n", number, sqrt(number));
    
    return 0;
}