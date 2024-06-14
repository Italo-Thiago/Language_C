#include <stdio.h>

int main()
{
    int n_slices = 2;
    int n_rows = 2;
    int n_cols = 3;

    int m[2][2][3] = { 
        // slice [0]
        {
            {1, 2, 3}, // [0]
            {4, 5, 6}  // [1]
        },
        
        // slice [1]
        {
            {7, 8, 9},   // [0]
            {10, 11, 12} // [1]
        }
    };

    printf("&m = %p, m = %d\n\n", &m, m);

    // slice
    for (int k = 0; k < n_slices; k++)
    {
        // rows
        for (int i = 0; i < n_rows; i++)
        {
            // cols
            for (int j = 0; j < n_cols; j++)
            {
                printf("&m[%d][%d][%d] = %p, m[%d][%d][%d] = %d\n", k, i, j, &m[k][i][j], k, i, j, m[k][i][j]);
            }
        }
    }


    return 0;
}