/**
 * @file 036.c
 * @author Italo Thiago
 * @brief Create a program that shows what type of triangle can be formed from user input. 
 * @brief Equilateral: all sides equal, Isosceles: Two equal sides, Scalene: all different sides.
 * @version 0.1
 * @date 2024-07-07
 */
#include <stdio.h>

int main()
{
    float sideOne = 0, sideTwo = 0, sideThree = 0;
    
    printf("When is the first side: ");
    scanf("%f", &sideOne);
    fflush(stdin);

    printf("When is the second side: ");
    scanf("%f", &sideTwo);
    fflush(stdin);

    printf("When is the third side: ");
    scanf("%f", &sideThree);
    fflush(stdin);

    float sumOne = sideOne + sideTwo;
    float sumTwo = sideTwo + sideThree;
    float sumThree = sideOne + sideThree;

    if (sumOne > sumTwo && sumOne > sumTwo && sumTwo > sumThree)
    {
        printf("The sides cannot form a triangle\n");
    }
    else if (sideOne == sideTwo && sideTwo == sideThree && sideOne == sideThree)
    {
        printf("The sides can form a triangle: Equilateral\n");
    }
    else if (sideOne == sideTwo || sideTwo ==  sideThree || sideOne == sideThree)
    {
        printf("The sides can from a triangle: Isosceles\n");
    }
    else
    {
        printf("The sides can from a triangle: Scalene\n");
    }

    return 0;
}