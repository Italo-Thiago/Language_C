/**
 * @file 019.c
 * @author Italo Thiago
 * @brief A teacher wants to draw one of his four students to erase the board. Make a program that helps him, reading their name and writing the name of the chosen one. 
 * @version 0.1
 * @date 2024-06-25
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    char nameOne[20];
    char nameTwo[20];
    char nameThree[20];
    char nameFour[20];

    printf("First student: ");
    scanf("%s", &nameOne);
    fflush(stdin);

    printf("Second student: ");
    scanf("%s", &nameTwo);
    fflush(stdin);

    printf("Third student: ");
    scanf("%s", &nameThree);
    fflush(stdin);

    printf("Fourth student: ");
    scanf("%s", &nameFour);
    fflush(stdin);

    int random = rand() % 3;

    switch (random)
    {
        case 0: 
            printf("The chosen student was: %s.", nameOne);
            break;
        case 1:
            printf("The chosen student was: %s.", nameTwo);
            break;
        case 2:
            printf("The chosen student was: %s.", nameThree);
            break;
        case 3:
            printf("The chosen student was: %s.", nameFour);
            break;
        default:
            printf("ERROR");
            break;
    }

    return 0;
}