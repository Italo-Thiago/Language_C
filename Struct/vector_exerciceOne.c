#include <stdio.h>
#include <stdlib.h>

typedef struct _book
{
    char title[100];
    float price;
    int pageNumbers;
} Book;

int main()
{
    Book book1;
    Book *book2 = (Book *) calloc(1, sizeof(Book));

    printf("size book1: %ld\n", sizeof(book1));
    printf("size book2: %ld\n", sizeof(book2));
    printf("size *book2: %ld\n", sizeof(*book2));

    return 0;
}
