#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_slices = 2;
    int n_rows = 2;
    int n_cols = 3;

    int ***m = (int***) calloc(n_slices, sizeof(int**));

    // slices
    for (int k = 0; k < n_slices; k++)
    {
        m[k] = (int**) calloc(n_rows, sizeof(int*));
        
        // rows
        for (int i = 0; i < n_rows; i++)
        {
            m[k][i] = (int*) calloc(n_cols, sizeof(int));
        }
    }

    int count = 0;

    printf("&m = %p, m = %p\n\n", &m, m);

    // slice
    for (int k = 0; k < n_slices; k++)
    {
        printf("&m[%d] = %p, m[%d] = %p\n", k, &m[k], k, m[k]);

        // row 
        for (int i = 0; i < n_rows; i++)
        {
            printf("&m[%d][%d] = %p, m[%d][%d] = %p\n", k, i, &m[k][i], k, i, m[k][i]);

            // column
            for (int j = 0; j < n_cols; j++)
            {
                m[k][i][j] = count++;

                printf("&m[%d][%d][%d] = %p, m[%d][%d][%d] = %d\n", k, i, j, &m[k][i][j], k, i, j, m[k][i][j]);
            }
            puts("");
        }
        puts("");
    }

    // slice
    for (int k = 0; k < n_slices; k++)
    {
        // rows
        for (int i = 0; i < n_rows; i++)
        {
            free(m[k][i]);
        }
        free(m[k]);
    } 
    free(m);
    m = NULL;

    return 0;
}