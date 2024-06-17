#include <stdio.h>
#include <stdlib.h>

int ** CreateIntMatrix(int nrows, int ncols)
{
    int **m = (int **) calloc(nrows, sizeof(int *));

    for (int i = 0; i < nrows; i++)
    {
        m[i] = (int *) calloc(ncols, sizeof(int));
    }
    
    return m;
}

int main()
{
    int nrows = 100000;
    int ncols = 10000;

    int **m = CreateIntMatrix(nrows, ncols);

    for (int i = 0; i < nrows; i++)
    {
        for (int  j = 0; j < ncols; j++)
        {
            m[i][j] = (i + j) % 2;
        }
    }

    return 0;
}