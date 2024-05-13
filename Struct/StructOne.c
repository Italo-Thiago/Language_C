#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct type_person
{
    int age;
    float weight;
    char name[TAM];
};

typedef struct type_person type_person;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Criando e inicializando
    type_person pes = {0, 0.0, "Test"};

    printf("Start:\n");
    printf("pes.age: %d\n", pes.age);
    printf("pes.weight: %.2f\n", pes.weight);
    printf("pes.name: %s\n", pes.name);

    // Atribuindo valores aos campos
    pes.age =  10;
    pes.weight = 99.99;
    strcpy(pes.name, "Text");

    printf("\nChanging the code fields:\n");
    printf("pes.age: %d\n", pes.age);
    printf("pes.weight: %.2f\n", pes.weight);
    printf("pes.name: %s\n", pes.name);

    // Solicitando inserções via teclado

    printf("\nEnter an integer:\n");
    scanf("%d", &pes.age);
    printf("Enter a real number:\n");
    scanf("%f", &pes.weight);
    printf("Enter a word:\n");
    scanf("%s", &pes.name);

    printf("\nChanging with user data:\n");
    printf("pes.age: %d\n", pes.age);
    printf("pes.weight: %.2f\n", pes.weight);
    printf("pes.name: %s\n", pes.name); 
}