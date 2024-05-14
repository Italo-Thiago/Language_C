#include <stdio.h>

void print_one(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}

void print_two(int v[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
}

void print_three(int *v, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};

    puts("First print:");
    print_one(vet, 5);

    puts("\nSecond print:");
    print_two(vet);

    puts("\nThird print:");
    print_three(vet, 5);
}