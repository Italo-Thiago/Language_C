#include <stdio.h>

int SomaAndSub(int x, int y, int *sub)
{
    int soma = x + y;
    *sub = x - y;

    puts("==> Funcao");
    printf("&x = %p, X = %d\n", &x, x);
    printf("&y = %p, Y = %d\n", &y, y);
    printf("&soma = %p, soma = %d\n\n", &soma, soma);
    
    return soma;
}

int main()
{
    int a = 10;
    int b = 20;
    int c;

    puts("==> Antes de chamar a funcao");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);

    int d = SomaAndSub(a, b, &c);

    puts("==> Depois de chamar a funcao");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);
    printf("&d = %p, d = %d\n\n", &d, d);

    return 0;
}