/**
 * @file 043.c
 * @author Italo Thiago
 * @brief Develop a program that reads the first term and reason of a PA. In the end, show the first 10 terms of this progression 
 * @version 0.1
 * @date 2024-07-10
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int term = 0, reason = 0, result = 0; 

    printf("First term: ");
    fflush(stdin);
    scanf("%i", &term);

    printf("Reason: ");
    fflush(stdin);
    scanf("%i", &reason);

    for(int i = 0; i < 10; i++)
    {
        printf("%i -> ", result);
        result = term += reason;
    }
    printf("END");

    return 0;
}