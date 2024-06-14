#include <stdio.h>
#include <stdlib.h>

int **CreateIntMatrix(int nrows, int ncols)
{
    int **m = (int **) calloc(nrows, sizeof(int *));

    for (int i = 0; i < nrows; i++)
    {
        m[i] = (int *) calloc(ncols, sizeof(int));
    }
    
    return m;
}

void PrintIntMatrix(const int **m, int nrows, int ncols)
{
    printf("&m = %p, m = %p\n\n", &m, m);

    for (int i = 0; i < nrows; i++)
    {
        printf("&m[%d] = %p, m[%d] = %p\n", i, &m[i], i, m[i]);

        for (int j = 0; j < ncols; j++)
        {
            printf("&m[%d][%d] = %p, m[%d][%d] = %d\n", i, j, &m[i][j], i, j, m[i][j]);
        }
        puts("");
    }
}

void AddScalarIntoIntMatrix(int **m, int nrows, int ncols, int scalar)
{
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncols; j++)
        {
            m[i][j] += scalar;
        }
        
    }
    
}

void DestroyIntMatrix(int ***mat, int nrows, int ncols)
{
    int **aux = *mat;

    for (int i = 0; i < nrows; i++)
    {
        free(aux[i]);
    }
    free(aux);
    *mat = NULL;
}

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		printf("ERROR\n%s nrows ncols scalar\n", argv[0]);
		exit(-1); // <== Finaliza o programa
	}

    int nrows = atoi(argv[1]);
    int ncols = atoi(argv[2]);
    int scalar = atoi(argv[3]);



    // matriz allocation
    int **m = CreateIntMatrix(nrows, ncols);

    int count = 0;

    for (int i = 0; i < nrows; i++)
    {
        for (int  j = 0; j < ncols; j++)
        {
            m[i][j] = count++;
        }
    }

    // print matrix
    PrintIntMatrix((const int**) m, nrows, ncols);

    // add scalar
    AddScalarIntoIntMatrix(m, nrows, ncols, scalar);
    PrintIntMatrix((const int**) m, nrows, ncols);

    // matrix deallocation
    DestroyIntMatrix(&m, nrows, ncols);
    printf("m is NULL? %d\n", m == NULL);

    return 0;
} 