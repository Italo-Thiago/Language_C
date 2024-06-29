/**
 * @file 007.c
 * @author Italo Thiago
 * @brief Develop a program that reads a student's two grades and calculates and displays their average 
 * @version 0.1
 * @date 2024-06-24
 */
#include <stdio.h>

int main()
{
    float numberOne = 0, numberTwo = 0, average = 0;

    printf("Student's first grade: ");
    scanf("%f", &numberOne);

    printf("Student's second grade: ");
    scanf("%f", &numberTwo);

    average = (numberOne + numberTwo) / 2;

    printf("The average between %.1f and %.1f is equal to %.1f", numberOne, numberTwo, average);

    return 0;
}