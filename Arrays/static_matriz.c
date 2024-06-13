#include <stdio.h>

int main()
{
    int n_rows = 2;
    int n_cols = 3;

    int matriz[2][3] = {{ 0, 1, 2}, { 3, 4, 5}};

    printf("&m = %p, m = %p\n\n", &matriz, matriz);

    for (int i = 0; i < n_rows; i++)
    {
        for (int j = 0; j < n_cols; j++)
        {
            printf("&matriz[%d][%d] = %p, m[%d][%d] = %d\n", i, j, &matriz[i][j], i, j, matriz[i][j]);
        }
        puts("");
    }
    return 0;
}