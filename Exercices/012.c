/**
 * @file 012.c
 * @author Italo Thiago
 * @brief Make an algorithm that reads the price of a product and shows its new price. with 5% discount. 
 * @version 0.1
 * @date 2024-06-24
 */
#include <stdio.h>

int main()
{
    double price = 0, discount = 0, newPrice = 0;

    printf("What is the price of the product? R$");
    scanf("%lf", &price);

    // discount = (5 * price) / 100; // Discount amount
    // newPrice = price - discount;  // Discount price

    newPrice = price - (price * 5 / 100);

    printf("The product that costs R$%.2f in the promotion with 5%% discount, will cost R$%.2f.", price, newPrice);

    return 0;
}