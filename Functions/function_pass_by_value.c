#include <stdio.h>

int Soma (int x, int y)
{
    int z = x + y;

    puts("==> Função");
    printf("&x = %p, X = %d\n", &x, x);
    printf("&y = %p, Y = %d\n", &y, y);
    printf("&z = %p, Z = %d\n\n", &z, z);

    return z;
    }
int main()
{
    int a = 10;
    int b = 20;
    int c;

    puts("==> Antes de Chamar a Função");
    printf("&a = %p, A = %d\n", &a, a);
    printf("&b = %p, B = %d\n", &b, b);
    printf("&c = %p, C = %d\n\n", &c, c);

    c = Soma (a, b);

    puts("==> Depois de Chamar a Função");
    printf("&a = %p, X = %d\n", &a, a);
    printf("&b = %p, Y = %d\n", &b, b);
    printf("&c = %p, Z = %d\n\n", &c, c);

    return 0;
}

