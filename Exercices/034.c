/**
 * @file 034.c
 * @author Italo Thiago
 * @brief Create a program that reads a number of notes chosen by the user and calculates their average, showing a message at the end according to the average reached.
 * @brief Below 5.0: FAIL, Between 5.0 and 6.9: RECOVERY, 7.0 or higher: PASS
 * @version 0.1
 * @date 2024-07-06
 */
#include <stdio.h>

int main()
{
    int choose = 0, i = 0;

    printf("How many grades do you want to know the average?: ");
    scanf("%d", &choose);

    double grades[choose];

    while (i < choose)
    {
        printf("Write the note %d please: ", i + 1);
        fflush(stdin);
        scanf("%lf", &grades[i]);
        i++;   
    }

    double average = 0, total = 0;
    
    for (int i = 0; i < choose; i++)
    {
        total += grades[i];
    }
    average = total / choose;

    // Apresentação para o usuário dependendo da média
    // Se menor de < 5 falha
    if (average < 5.0)
    {
        printf("Its average is %.1lf.\n", average);
        printf("You are REJECTED");
    }
    else if (average >= 7.0)
    {
        printf("Its average is %.1lf.\n", average);
        printf("You are APPROVED");
    }
    else
    {
        printf("Its average is %.1lf.\n", average);
        printf("You are in RECOVERY");
    }

    // Se maior que 7 passou

    // recuperação


    return 0;
}