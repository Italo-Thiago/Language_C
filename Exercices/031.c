/**
 * @file 031.c
 * @author Italo Thiago
 * @brief Write a program that reads any integer and asks the user to choose what the conversion bases will be:
 * @brief 1 - binary, 2 - octal, 3 - hexadecimal
 * @version 0.1
 * @date 2024-07-05
 */
#include <stdio.h>

void Binary(int number)
{
    if (number == 0)
    {
        printf("%d", number);
    }
    else
    {
        Binary(number / 2);
        printf("%d", number % 2);
    }
}

int main()
{
    int choose = 0, number = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Choose one of the bases for conversion\n");
    printf("[ 1 ] Converto to BINARY \n");
    printf("[ 2 ] Converto to OCTAL \n");
    printf("[ 3 ] Converto to HEXADECIMAL \n");
    printf("Your Option: ");
    scanf("%d", &choose);

    if (choose == 1)
    {
        printf("%d converted to BINARY is equal to: ", number);
        Binary(number);
    }
    else if (choose == 2)
    {
        printf("%d converted to OCTAL is equal to: %o\n", number, number);
    }
    else if (choose == 3)
    {
        printf("%d converted to HEXADECIMAL is equal to: %x\n", number, number);
    }
    else
    {
        printf("No choices selected");
    }

    return 0;
}