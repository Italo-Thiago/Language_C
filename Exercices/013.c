/**
 * @file 013.c
 * @author Italo Thiago
 * @brief Create an algorithm that reads an employee's salary and shows his new salary, with a 15% increase
 * @version 0.1
 * @date 2024-06-24
 */
#include <stdio.h>

int main()
{
    float salary = 0, newSalary = 0;

    printf("What is the Employee's salary? :R$");
    scanf("%f", &salary);

    newSalary = salary + (salary * 15 / 100);
    printf("An employee who earned R$%.2f, with a 15%% increase, now receiver R$%.2f", salary, newSalary);
    
    return 0;
}