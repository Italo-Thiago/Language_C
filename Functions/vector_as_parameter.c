#include <stdio.h>
#include <stdlib.h>

void Sum_vector_with_scalar(int v[], int n, int scalar)
{
    for (int i = 0; i < n; i++)
    {
        v[i] += scalar;
    }
}

// v[] e *v, retornam um ponteiro.
void Print_vector(const int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
        // v[i]++ = v[i] + 1 == *(v + i) + 1
    }
    puts("");
}

void Deallocate_vector(int **v) 
{
    int *aux = *v;
    free(aux);
    *v = NULL;
}

int main()
{
    // allocation of a static vector (Stack memory)
    puts("### VETOR ESTATICO ###");
    int vs[5] = {0, 10, 20, 30, 40};

    Print_vector(vs, 5);
    Sum_vector_with_scalar(vs, 5, 9);
    Print_vector(vs,5);

    puts("### VETOR DINAMICO ###");
    int *vh = (int *) calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        vh[i] = i * 100;
    }

    Print_vector(vh, 5);
    Sum_vector_with_scalar(vh, 5, 9);
    Print_vector(vh,5);

    // deallocating dynamic vector
    // free(vh);
    // vh = NULL;

    puts("==> Before the Dynamic Vector Deallocate Function");
    printf("&vh = %p, vh = %p", &vh, vh);
    Deallocate_vector(vh);

    puts("==> After the Dynamic Vector Deallocate Function");
    printf("&vh = %p, vh = %p", &vh, vh);

    return 0;
}