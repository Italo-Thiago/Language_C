#include <stdio.h>

int main ()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        if (i == 5)
        {
            break;
        }
    }

    printf("\n");

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);
    }
}