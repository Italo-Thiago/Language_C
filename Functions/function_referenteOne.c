#include <stdio.h>

void Swap(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;

    puts("==> Funcao");
    printf("&x = %p, X = %d\n", &x, *x);
    printf("&y = %p, Y = %d\n", &y, *y);
    printf("&aux = %p AUX = %d\n\n", &aux, aux);


}

int main()
{
    int a = 10;
    int b = 20;

    puts("==> Antes de Chamar a Funcao");
    printf("&a = %p, A = %d\n", &a, a);
    printf("&b = %p, B = %d\n\n", &b, b);

    Swap(&a, &b);
    
    puts("==> Depois de Chamar a Funcao");
    printf("&a = %p, A = %d\n", &a, a);
    printf("&b = %p, B = %d\n\n", &b, b);
}