#include <stdio.h>
#include <stdlib.h>

void PrintAllElements(int v[], int elements)
{
    for (int i = 0; i < elements; i++)
    {
        printf("%d\n", v[i]);
    }
}

int main()
{
    int v1[5] = {0, 1, 2, 3, 4};
    int* v2;

    v2 = (int*) malloc(5 * sizeof(int));
    v2 = v1;

    PrintAllElements(v1, 5);
    puts("");
    PrintAllElements(v2, 5);
    
    free(v2);
    return 0;
}