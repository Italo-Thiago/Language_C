#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nRows = 10000;
    int nCols = 10000;
    int nElems = nRows * nCols;

    int *m = (int *) calloc(nElems, sizeof(int));

    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            int p = (i * nCols) + j;
            m[p] = (i + j) % 2;
        }
    }
    
    return 0;
}