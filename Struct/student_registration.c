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

typedef struct _student
{
    char name[100];
    int age;
    Book *favoriteBook;
} Student;

Book *CreateBook(const char *title, unsigned int numberPages, float price)
{
    Book *book = (Book *) calloc(1, sizeof(Book));

    strcpy(book->title, title);
    book->numberPages = numberPages;
    book->price = price;

    return book;
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

void PrintBook(const Book *book)
{
    printf("Title: %s\n", book->title);
    printf("Number of Pages: %d\n", book->numberPages);
    printf("Price: R$ %.2f\n\n", book->price);
}

Student *CreateStudent(const char *name, int age, const Book *favoriteBook)
{
    Student *student = (Student *) calloc(1, sizeof(Student));

    strcpy(student->name, name);
    student->age = age;
    student->favoriteBook = CopyBook(favoriteBook);

    return student;
}

void DestroyStudent(Student **studentReference)
{
    Student *student = *studentReference;

    DestroyBook(&student->favoriteBook);
    free(student);
    *studentReference = NULL;
}

void PrintStudent(const Student *student) 
{
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    puts("Favorite Book");
    puts("-------------");
    PrintBook(student->favoriteBook);
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

int main()
{
    Book *book_harry = CreateBook("Harry Potter I", 200, 25);

    PrintBook(book_harry);
    book_harry->price = 10;
    PrintBook(book_harry);

    Student *ted = CreateStudent("Ted", 20, book_harry);
    PrintStudent(ted);

    puts("\nted->favoriteBook == book_harry");
    puts("Os exemplares sao iguais?");
    if (ted->favoriteBook == book_harry)
    {
        puts("TRUE");
    }
    else
    {
        puts("FALSE");
    }
    puts("");

    puts("\nBooks are equal");
    puts("A obra e a mesma ?");
    if(BooksAreEqual(ted->favoriteBook, book_harry))
    {
        puts("TRUE");
    }
    else
    {
        puts("FALSE");
    }
    puts("");

    DestroyBook(&book_harry);

    // printf("book_harry == NULL? %d\n", book_harry == NULL);
    PrintStudent(ted);

    DestroyStudent(&ted);

    return 0;
}