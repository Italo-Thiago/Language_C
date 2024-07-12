/**
 * @file 030.c
 * @author Italo Thiago 
 * @brief Write a program that asks an employee's salary and calculates the amount of his raise
 * @brief For salaries above R$1.250,00 calculate a 10% increase 
 * @brief For those inferior or equal, the increase is 15%
 * @version 0.1
 * @date 2024-07-04
 */
#include <stdio.h>

int main()
{
    float salary = 0, newSalary = 0;

    printf("What is the employee's salary? R$: ");
    scanf("%f", &salary);

    if (salary > 1250)
    {
        newSalary = salary + ((salary * 10) / 100);
        printf("Whoever earned R$%.2f now earns R$%.2f", salary, newSalary);
    }
    else 
    {
        newSalary = salary + ((salary * 15) / 100);
        printf("Whoever earned R$%.2f now earns R$%.2f", salary, newSalary);
    }

    return 0;
}