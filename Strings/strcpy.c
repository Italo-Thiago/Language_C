#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char origin[N] = {"Hello, World!!!"};
    char destiny[N];

    printf("Before strcpy:\n");
    puts(origin);
    puts(destiny);

    strcpy(destiny, origin);

    printf("After strcpy:\n");
    puts(origin);
    puts(destiny);
}