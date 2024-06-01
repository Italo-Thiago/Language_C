#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 'C';
    char *p = NULL;

    printf("a contains %c\n", a);
    printf("p contains %p\n", p);
    printf("&a is %p\n", (void *)&a);
    printf("&p is %p\n", (void *)&p);
    puts("\np receives the address of a\n");

    p = &a;
    printf("p contains %p\n", p);
    printf("&p is %p\n", (void *)&p);
    printf("a contains %c\n", a);
    printf("*p is %c", *p);

    puts("\np changes the content of it is a\n");
    *p = 'D';
    printf("p contains %p\n", p);
    printf("&p is %p\n", (void *)&p);
    printf("a contains %c\n", a);
    printf("*p is %c\n", *p);
}