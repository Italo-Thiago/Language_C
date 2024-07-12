/**
 * @file 033.c
 * @author Italo Thiago
 * @brief Create a program that reads a young person's year of birth and informs, according to his ae, whether he is still going to enlist for military service, whether it is time to enlist or whether it has already passed the enlistment period.
 * @brief Your program should also show the time left or past the deadline.
 * @version 0.1
 * @date 2024-07-06
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int age = 0, year = 0, currentYear = 0;

    time_t dateYear;
    time(&dateYear); 
    struct tm *date = localtime(&dateYear);
    currentYear = (date->tm_year+1900);

    printf("Year of birth: ");
    scanf("%d", &year);

    age = currentYear - year;

    if (age == 18)
    {   
        printf("Anyone born in %d is %d years old in %d.\n", year, age, currentYear);
        printf("You must enlist IMMEDIATELY!\n");
    }
    else if (age > 18)
    {                       
        printf("Anyone born in %d is %d years old in %d.\n", year, age, currentYear);
        printf("Your should have enlisted %d years ago.\n", age - 18);
        printf("His enlistment was in %d.\n", year + 18);
    }
    else // age < 18
    {
        printf("Anyone born in %d is %d years old in %d.\n", year, age, currentYear);
        printf("There are still %d years left before enlistment.\n", 18 - age);
        printf("Your enlistment will be in %d.\n", year + 18);
    }

    return 0;
}