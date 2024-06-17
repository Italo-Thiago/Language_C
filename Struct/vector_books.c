#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct _book
{
    char title[100];
    unsigned int numberPages;
    float price;
} Book;

typedef struct _vectorBook
{
    Book** book;
    unsigned int numberOfBooks;
} VectorBook;

Book *CreateBook(const char *title, unsigned int numberPages, float price)
{
    Book *book = (Book *) calloc(1, sizeof(Book));

    strcpy(book->title, title);
    book->numberPages = numberPages;
    book->price = price;

    return book;
}

void PrintBook(const Book *book)
{
    printf("Title: %s\n", book->title);
    printf("Number of Pages: %d\n", book->numberPages);
    printf("Price: R$ %.2f\n\n", book->price);
}

void DestroyBook(Book **bookReference)
{
    Book *book = *bookReference;
    free(book);
    *bookReference = NULL;
}

Book *CopyBook(const Book *book)
{
    return CreateBook(book->title, book->numberPages, book->price);
}

bool BooksAreEqual(const Book *bookOne, const Book *bookTwo)
{
    if (strcmp(bookOne->title, bookTwo->title) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Exercise
// 1. Criar uma função para alocar o vetor de livros
Book** CreateVectorBooks (VectorBook vectorbook)
{
    Book **vet = (Book **) calloc(vectorbook.numberOfBooks, sizeof(Book*));

    return vet;
}

// 2. Criar uma função para destruir o vetor de livros
void DestroyVectorBooks (Book **vectorReference, int vectorSize)
{

    Book *book = *vectorReference;
    for (int i = 0; i < vectorSize; i++)
    {
        DestroyBook(&vectorReference[i]);
    }
    free(vectorReference);
    **vectorReference = NULL;
}

int main()
{
    VectorBook vectorOne;

    Book** vet = CreateVectorBooks(vectorOne);

    vet[0] = CreateBook("Harry Potter I", 200, 25);
    vet[1] = CreateBook("A Batalha do Apocalipse", 600, 40);
    vet[2] = CreateBook("O Senhor dos Aneis", 500, 15);

    for (int i = 0; i < 3; i++)
    {
        PrintBook(vet[i]);        
    }

    DestroyVectorBooks(vet, 3);

    printf("vet is NULL = %d\n", vet == NULL);

    return 0;
}