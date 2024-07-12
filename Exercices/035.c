/**
 * @file 035.c
 * @author Italo Thiago
 * @brief The National Swimming Confederation needs a program that reads an athlete's year of birth and shows their category, according to age:
 * @brief Up to 9 years old: MIRIM, Up to 14 years old: CHILDREN, Up to 19 years old: JUNIOR, Up to 25 years old: SENIOR, Above MASTER.
 * @version 0.1
 * @date 2024-07-06
 */
#include <stdio.h>
#include <time.h>

int main()
{
    int year = 0, currentYear = 0;
    
    time_t dateYear;
    time(&dateYear);

    struct tm *date = localtime(&dateYear);
    currentYear = (date->tm_year + 1900);

    printf("Year of birth?: ");
    scanf("%d", &year);

    int age = currentYear - year;

    if (age <= 9)
    {
        printf("The athlete is %d years old\n", age);
        printf("Classification: MIRIM\n");
    }
    else if (age <= 14)
    {
        printf("The athlete is %d years old\n", age);
        printf("Classification: CHILDREN\n");
    }
    else if (age <= 19)
    {
        printf("The athlete is %d years old\n", age);
        printf("Classification: JUNIOR\n");
    }
    else if (age <= 25)
    {
        printf("The athlete is %d years old\n", age);
        printf("Classification: SENIOR\n");
    }
    else
    {
        printf("The athlete is %d years old\n", age);
        printf("Classification: MASTER\n");
    }

    return 0;
}