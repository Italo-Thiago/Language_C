#include <stdio.h>

int main() {
    int x = 10;  // Uma variável inteira
    int *p;      // Um ponteiro para um inteiro
    int **pp;    // Um ponteiro para um ponteiro para um inteiro

    p = &x;      // O ponteiro p aponta para x
    pp = &p;     // O ponteiro de ponteiro pp aponta para p

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor de p: %p\n", p);
    printf("Endereço de p: %p\n", &p);
    printf("Valor de *p: %d\n", *p);
    printf("Valor de pp: %p\n", pp);
    printf("Endereço de pp: %p\n", &pp);
    printf("Valor de *pp: %p\n", *pp);
    printf("Valor de **pp: %d\n", **pp);

    return 0;
}
