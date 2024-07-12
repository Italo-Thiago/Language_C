/**
 * @file 032.c
 * @author Italo Thiago
 * @brief Write a program to approve a bank loan for the purchase of a house. Ask the value of the house, the buyer's salary and how many years he will pay.
 * @brief The monthly installment cannot exceed 30% of the salary or the loan will be denied.
 * @version 0.1
 * @date 2024-07-05
 */
#include <stdio.h>

int main()
{
    double houseValue = 0, salary = 0;
    int years = 0;

    printf("House value: R$");
    scanf("%lf", &houseValue);
    fflush(stdin);

    printf("Buyer's salary: R$");
    scanf("%lf", &salary);
    fflush(stdin);

    printf("How many years of financing?: ");
    scanf("%d", &years);
    fflush(stdin);

    double portion = (houseValue / years) / 12;
    double discount = (salary * 30) / 100;

    // Se a prestação for maior que a parcela mudar entre aprovado ou reprovado
    printf("To pay for a house every R$%.2lf in %d years, the installment will be R$%.2lf.\n", houseValue, years, portion);

    if (portion >= discount)
    {
        printf("Loan DENIED!"); 
    }
    else
    {
        printf("Loan can be GRANTED!");
    }

    return 0;
}