/*

1. Crie uma função que aloque um vetor de double e o retorne.

2. Crie uma função que aloque um vetor de double retornando-o por referência.

3. Crie uma função que desaloque um dado vetor, "setando-o" com NULL apos a desalocação

4. crie uma função que faça a cópia de um vetor: faça a versão com retorno de função e com retorno por referência;

5. Crie uma função que calcule o mínimo e o máximo de um vetor de inteiros e retorne os valores em duas variáveis diferentes.
*/
#include <stdio.h>
#include <stdlib.h>

double* DoubleVector(int size)
{
    double *v = (double*) calloc(size, sizeof(double));

    if (v == NULL)
    {
        return NULL;
    }
    return v;
}

int main()
{

    double* vh = DoubleVector(5);

    for (int i = 0; i < 5; i++)
    {
        vh[i] = i;
        printf("vh[%d] = %f\n", i, vh[i]);
    }

    free(vh);
    vh = NULL;

    return 0;
}