#include <stdio.h>

int main()
{
    int A, B, sum, sub, mult, div;

    printf("Enter the first number: ");
    scanf("%d", &A);
    printf("Enter the second number: ");
    scanf("%d", &B);

    sum = A + B;
    sub = A - B;
    mult = A * B;
    div = A / B;

    printf("\nResults:\n");
    printf("Addition: %d.\n", sum);
    printf("Subtraction: %d.\n", sub);
    printf("Multiplication: %d.\n", mult);
    printf("Division: %d.\n", div);
}