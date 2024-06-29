#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _book
{
    char title[100];
    float price;
    int pageNumber;
} Book;

Book *CreateBook(const char title[], float price, int pageNumber)
{
    Book *book = (Book*) calloc(1, sizeof(Book));

    strcpy(book->title, title);
    book->pageNumber = pageNumber;
    book->price = price;

    return book;
}

int main()
{
    Book book1 = {.title = "Harry Potter I", 30.0, 250};
    Book *book2 = CreateBook("The Legend of Noob", 10.0, 100);

    printf("title 1 = %s\n", book1.title);
    // printf("title 1 = %s\n", book1->title);
    // printf("title 1 = %s\n",&book1->title);
    printf("title 1 = %s\n",(&book1)->title);

    // printf("title 2 = %s\n",book2.title);
    printf("title 2 = %s\n",book2->title);
    // printf("title 2 = %s\n",*book2.title);
    printf("title 2 = %s\n",(*book2).title);
    printf("title 2 = %s\n",book2[0].title);
    
    // a f h i.    
    return 0;
}