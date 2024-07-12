/**
 * @file 046.c
 * @author Italo Thiago
 * @brief Create a program that reads the birth year of seven people. At the end, show how many people have not yet reached the age of majority and how many are already older.
 * @version 0.1
 * @date 2024-07-11
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("cls");

    int years[7];
    int currentYear;
    time_t dateYear;

    time(&dateYear);

    struct tm *date = localtime(&dateYear);

    // currentYear = (date->tm_year + 1900);
    currentYear = 2017;

    for(int i = 0; i < 7; i++)
    {
        printf("In what year was %i person born?: ", i + 1);
        scanf("%i", &years[i]);
    }


    int year = 0, counter = 0, bigger = 0, smaller = 0, age = 0;
    for(int i = 0; i < 7; i++)
    {
        age = currentYear - years[counter];
        counter++;

        if(age >= 18)
        {
            bigger++;
        }
        else
        {
            smaller++;
        }
    }

    printf("Int total we had %i people of legal age.\n", bigger);
    printf("And we also had %i underage people.\n", smaller);

    return 0;
}