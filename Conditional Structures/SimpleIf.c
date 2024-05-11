#include <stdio.h>

int main ()
{
    float m;

    printf("Enter note:\n");
    scanf("%f", &m);

    if (m >= 7.0)
    {
        printf("Aprovado(a)!\n");
    }
    else
    {
        printf("Reprovado(a)!\n");
    }

    if (m >= 4.0 && m < 7.0)
    {
        printf("Tem direito a exame!\n");
    }
}