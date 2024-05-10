#include <stdio.h>

#define text "Data input and output."

int main()
{
    printf("%s\n", text);

    int age = 0;
    float height = 0.0;
    char name[50] = "";

    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("Enter your height: \n");
    scanf("%f", &height);

    printf("Enter your name: \n");
    scanf("%s", &name);

    printf("Data reported:\n");
    printf("Age: %d.\n", age);
    printf("Height: %.2f.\n", height);
    printf("Name: %s.\n", name);
}