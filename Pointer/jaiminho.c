#include <stdio.h>

int main() {
    int messi = 10;  // Uma variável inteira
    int *jaiminho;   // Um ponteiro para um inteiro
    int **sebastiao; // Um ponteiro para um ponteiro para um inteiro

    jaiminho = &messi;      // O ponteiro jaiminho aponta para messi
    sebastiao = &jaiminho;  // O ponteiro de ponteiro sebastiao aponta para jaiminho

    printf("Endereço da variável &jaiminho: %p\n", &jaiminho);
    printf("Valor da variável jaiminho: %p\n", jaiminho);
    printf("Conteúdo de um endereço *(jaiminho): %d\n", *jaiminho);

    printf("Endereço da variável &sebastiao: %p\n", &sebastiao);
    printf("Valor da variável sebastiao: %p\n", sebastiao);
    printf("Conteúdo de um endereço *(sebastiao): %p\n", *sebastiao);
    printf("Conteúdo de um endereço **(sebastiao): %d\n", **sebastiao);

    return 0;
}
