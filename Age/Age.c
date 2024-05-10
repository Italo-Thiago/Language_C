#include <stdio.h>

int main() 
{
    /*
    int age = 0;

    printf("Initial value of age: %d.\n", age);

    printf("Enter an age: \n");
    scanf("%d", &age);

    printf("Age entered: %d.\n", age);
    */

    int age = 0;
    float weight = 0;

    printf("Enter an age:\n");
    scanf("%d", &age);

    printf("Enter a weight:\n");
    scanf("%f", &weight);

    printf("Informed age: %d.\n", age);
    printf("Informed weight: %f.\n", weight);
}