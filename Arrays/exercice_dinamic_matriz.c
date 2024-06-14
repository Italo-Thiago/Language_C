/*
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1. Alocar uma matriz dinâmica
    int nrows = 3, ncols = 3;
    int **m = NULL;

    m = (int**) calloc(nrows, sizeof(int*));
    for (int i = 0; i < nrows; i++)
    {
        m[i] = (int*) calloc(ncols, sizeof(int));
    }

    // 2. Imprimir os elementos de uma matriz e seus endereços de memória
    // 3. Adicionar um escalar a uma matriz
    int count = 0;

    for(int i = 0; i < nrows; i++)
    {
        for(int j = 0; j < ncols; j++)
        {
            m[i][j] = count++;
            printf("&m[%d][%d] =  %p, m[%d][%d] = %d\n", i, j, &m[i][j], i, j, m[i][j]);
        }
        puts("");
    }

    // 4. Desalocar uma matriz, atribuindo valor NULL ao ponteiro
    for (int i = 0; i < nrows; i++)
    {
        free(m[i]);
    }
    free(m);
    m = NULL;

    return 0;
}