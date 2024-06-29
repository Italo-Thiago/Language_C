/**
 * @file 015.c
 * @author Italo Thiago 
 * @brief Write a program that asks the number of km traveled by a rented car and the number of days for which it was rented. Calculate the price to pay, knowing that the car costs R$60 per day and R$0.15 per km driven 
 * @version 0.1
 * @date 2024-06-24
 */
#include <stdio.h>

int main() 
{
    int days = 0;
    float kilometer = 0, total = 0;

    printf("How many days rented? ");
    scanf("%d", &days);

    fflush(stdin);
    printf("How many kilometers driven? ");
    scanf("%f", &kilometer);

    total = (days * 60) + (kilometer * 0.15);

    printf("The total payable is R$%.2f", total);

    return 0;
}