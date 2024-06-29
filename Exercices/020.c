/**
 * @file 020.c
 * @author Italo Thiago
 * @brief The same teacher from the previous challenge wants to draw the order in which the student's work will be presented. Make a program that reads the names of the four students and shows the order drawn. 
 * @version 0.1
 * @date 2024-06-25
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(NULL));  

    char nameOne[20];
    char nameTwo[20];
    char nameThree[20];
    char nameFour[20];

    printf("First students: ");
    scanf("%s", &nameOne);
    fflush(stdin);

    printf("Second students: ");
    scanf("%s", &nameTwo);
    fflush(stdin);

    printf("Third student: ");
    scanf("%s", &nameThree);
    fflush(stdin);

    printf("Fourth student: ");
    scanf("%s", &nameFour);
    fflush(stdin);

    char names[4][20];
    char newNames[4][20];

    strcpy(names[0], nameOne);
    strcpy(names[1], nameTwo);
    strcpy(names[2], nameThree);
    strcpy(names[3], nameFour);


    for (int i = 0; i < 4; i++)
    {
        int random;
        do 
        {
            random = rand() % 4;
        } 
        while (names[random][0] == '\0');

        strcpy(newNames[i], names[random]);
        names[random][0] = '\0';
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", newNames[i]);
    }

    return 0;
}