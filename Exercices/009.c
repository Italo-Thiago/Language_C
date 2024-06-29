/**
 * @file 009.c
 * @author Italo Thiago
 * @brief Write a program that reads any integer and displays its multiplication table on the screan 
 * @version 0.1
 * @date 2024-06-24
 */
#include <stdio.h>

int main()
{
    int number = 0;

    printf("Enter a number to see your multiplication table: ");
    scanf("%d",&number);

    printf("------------\n");

    printf("%d x  1 = %d\n", number, number * 1);
    printf("%d x  2 = %d\n", number, number * 2);
    printf("%d x  3 = %d\n", number, number * 3);
    printf("%d x  4 = %d\n", number, number * 4);
    printf("%d x  5 = %d\n", number, number * 5);
    printf("%d x  6 = %d\n", number, number * 6);
    printf("%d x  7 = %d\n", number, number * 7);
    printf("%d x  8 = %d\n", number, number * 8);
    printf("%d x  9 = %d\n", number, number * 9);
    printf("%d x 10 = %d\n", number, number * 10);
    
    printf("------------");

    return 0;
}