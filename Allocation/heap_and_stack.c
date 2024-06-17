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
    //Stack
    int vs[] = {1, 2, 3, 4, 5};

    //Heap
    int i, n = 5;
    int* vh;
    vh = (int*) malloc(n * sizeof(int));

    for (i = 0; i < 5; i++)
    {
        vh[i] = i+1;
    }


    PrintAllElements(vs, 5);
    puts("");
    PrintAllElements(vh, 5);

    free(vh);
    vh = NULL;
}