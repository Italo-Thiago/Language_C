#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, *p1, *p2;

    a = 4;
    b = 3;
    p1 = &a;
    p2 = p1;
    *p2 = *p1 + 3;
    b = b * (*p1);
    (*p2)++;
    p1 = &b;

    printf("%d %d %p %p\n", *p1, *p2, &a, &b);
    printf("%d %d %p %p\n", a, b, &a, &b);

}