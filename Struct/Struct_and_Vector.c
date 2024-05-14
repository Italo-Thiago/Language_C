#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.H>

#define TAM 3

struct type_person
{
    int age;
    float weight;
    char name[50];
};

typedef struct type_person type_person;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    type_person list[TAM];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Enter data (%d):\n", i + 1);
        puts("Name: ");
        scanf("%50[^\n]s", &list[i].name);
        fflush(stdin);

        puts("Age: ");
        scanf("%d", &list[i].age);
        fflush(stdin);

        puts("Weight: ");
        scanf("%f", &list[i].weight);
        fflush(stdin);
    }
    system("cls");

    puts("Your data:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("-------------------- Person %d --------------------\n", i + 1);
        printf("\tName: %s\n", list[i].name);
        printf("\tAge: %d\n", list[i].age);
        printf("\tWeight: %.2f\n", list[i].weight);
    }
    printf("---------------------------------------------------\n");
}