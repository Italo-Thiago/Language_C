/**
 * @file 010.c
 * @author Italo Thiago
 * @brief Create a program that reads how much money a person has in their wallet and shows how many dollars they can buy. 
 * @version 0.1
 * @date 2024-06-24
 */
#include <stdio.h>

int main()
{
    double dollar = 3.27, wallet = 0;
    printf("How much money do you have in your wallet? R$");
    scanf("%lf", &wallet);

    printf("With R$%.2lf you can buy US$%.2lf\n", wallet, wallet / dollar);

    return 0;
}