#include <stdio.h>

int main ()
{
    char s[10];

    printf("Type something (reading by gets):\n");
    gets(s);
    fflush(stdin);

    puts("Result:");
    puts(s);
    puts("");

    printf("Type something (reading by fgets):\n");
    fgets(s, 10, stdin);
    fflush(stdin);

    puts("Results:");
    puts(s);
}