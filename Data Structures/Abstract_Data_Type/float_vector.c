#include "float_vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*************************************** INTERFACE PRIVADA ****************************************/
struct float_vector
{
    int capacity;
    int size;
    float *data;
};

// função "privada" ==> não está disponível para os usuários/programas, ou outros arquivos que usam o float_vector.h
bool IsFull(const FloatVector *vec)
{
    return vec->size == vec->capacity;
}

/*************************************** IMPLEMENTAÇÃO DA INTERFACE PÚBLICA ****************************************/

/**
 * @brief Cria (aloca) um vetor de floats com uma dada capacidade.
 * 
 * @param capacity 
 * @return FloatVector*
 */
FloatVector *Create(int capacity)
{
    FloatVector *vec = (FloatVector *) calloc(1, sizeof(FloatVector)); 
    vec->size = 0;
    vec->capacity = capacity;
    vec->data = (float*) calloc(capacity, sizeof(float));

    return vec;
}

/**
 * @brief Desaloca o atributo data, desaloca o a struct FloatVector, e torna vecReference igual a NULL.
 *  
 * @param **vecReference 
 */
void Destroy(FloatVector **vecReference)
{
    FloatVector *vec = *vecReference;

    free(vec->data);
    free(vec);
    *vecReference = NULL;
}

/**
 * @brief Retorna o tamanho do vetor 
 * 
 * @param *vec 
 * @return int 
 */
int Size(const FloatVector *vec)
{
    return vec->size;
}

/**
 * @brief Retorna a capacidade do vetor
 * 
 * @param *vec 
 * @return int  
*/
int Capacity(const FloatVector *vec)
{
    return vec->capacity;
}

/**
 * @brief Retorna o elemento do índice "index" com bound-checked
 * 
 * @param *vec 
 * @param index 
 * @return float 
 */
float At(const FloatVector *vec, int index)
{
    if (index < 0 || index >= vec->size)
    {
        fprintf(stderr, "ERROR in 'at'\n");
        fprintf(stderr, "Index [%d] is out of bounds: [0, %d]\n", index, vec->size);
        exit(EXIT_FAILURE);
    }
    return vec->data[index];
}

/**
 * @brief Retorna o elemento do índice "index"
 * 
 * @param vec 
 * @param index 
 * @return float 
 */
float Get(const FloatVector *vec, int index)
{
    return vec->data[index];
}

/**
 * @brief Adiciona mais um elemento ao vetor "data", e incrementa o "size" , e acusa erro caso o tentemos passar mais dados do que a capacidade do vetor.
 * 
 * @param *vec 
 * @param val 
 */
void Append(FloatVector *vec, float val)
{
    if (IsFull(vec))
    {
        printf("ERROR in 'append'\n");
        printf("Vector is full'\n");
        exit(EXIT_FAILURE);
    }

    vec->data[vec->size] = val;
    vec->size++;
}

/**
 * @brief Atribui o valor "val" no índice "index" do vetor de tipo "tad". Lança um erro se o índice for inválido.
 * 
 * @param vec 
 * @param index 
 * @param val 
 */
void Set(FloatVector *vec, int index, float val)
{
    if (index < 0 || index >= vec->size)
    {
        fprintf(stderr, "ERROR in 'set'\n");
        fprintf(stderr, "Index [%d] is out of bounds: [0, %d]\n", index, vec->size);
        exit(EXIT_FAILURE);
    }
    vec->data[index] = val;
}

/**
 * @brief Imprime os atributos "size", "capacity" e todos os elementos de "data" que e um vetor do tipo float, de vet que e um ponteiro para uma Struc do tipo FloatVector.
 * 
 * @param *vec 
 */
void Print(const FloatVector *vec)
{
    puts("-----------------------------");
    printf("Size: %d\n", vec->size);
    printf("Capacity: %d\n", vec->capacity);
    puts("---");

    for (int i = 0; i < vec->size; i++)
    {
        printf("[%d] = %f\n", i,vec->data[i]);
    }
    puts("-----------------------------");
}