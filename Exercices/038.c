/**
 * @file 038.c
 * @author Italo Thiago
 * @brief Create a program that calculates the amount to be paid for a product, considering its standard price and payment conditions:
 * @brief Cash/check: 10% discount | Cash on card: 5% discount | Up to 2x on card: normal price | 3c or more on card: 20 interest.
 * @version 0.1
 * @date 2024-07-07
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");   
    // system("clear"); Linux
    
    double price = 0;

    printf("Purchase price: R$");
    scanf("%lf", &price);
    fflush(stdin);

    printf("PAYMENT METHODS\n");
    printf("[ 1 ] cash/check.\n");
    printf("[ 2 ] cash card.\n");
    printf("[ 3 ] 2x on cash.\n");
    printf("[ 4 ] 3x or more on the card.\n");

    int option = 0;
    
    printf("What is the option? ");
    scanf("%d", &option);
    fflush(stdin);

    int installments = 0;
    double auxiliar = 0, newPrice = 0, portion = 0;

    auxiliar = price;

    switch (option)
    {
        case 1:
            newPrice = price - (price * 10) / 100;

            printf("Your purchase of R$%.2lf will cost R$%.2lf in the end.\n", auxiliar, newPrice);
            break;
        case 2:
            newPrice = price - (price * 5) / 100;

            printf("Your purchase of R$%.2lf will cost R$%.2lf in the end.\n", auxiliar, newPrice);
            break;
        case 3:
            portion = price / 2;

            printf("Your purchase of R$%.2lf pai in 2 installments will cost R$%.2lf int the end.\n", auxiliar, portion);
            break;
        case 4:
            newPrice = price + (price * 20) / 100;

            printf("How many installments: ");
            scanf("%d", &installments);
            
            portion = newPrice / installments;

            printf("Your purchase will be paid in %dx installments of R$%.2lf WITH INTEREST.\n", installments, portion);
            printf("Your purchase of R$%.2lf will cost R$%2.lf in the end.\n", auxiliar, newPrice);
            break;
        default:
            printf("No options selected.\n");
            break;
    }

    return 0;
}