#include <stdio.h>

int main ()
{
    // int v[5];

    // float m;

    // v[0] = 50;
    // v[1] = 40;
    // v[2] = 30;
    // v[3] = 20;
    // v[4] = 10;

    // m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    // printf("Resultado: %.2f\n", m);

    // int v[5] = {10, 20, 30, 40, 50};
    // int i;
    // float s = 0;

    // for (i = 0; i < 5; i++)
    // {
    //     s += v[i];
    // }

    // printf("Resultado: %.2f\n", s/5);

    int v[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Inserta a data: \n");
        scanf("%d", &v[i]);
    }

    printf("Data entering.:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
}