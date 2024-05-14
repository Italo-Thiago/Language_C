#include <stdio.h>

int main ()
{
    char s[10];

    printf("Type something (scanf conventional): \n");
    scanf("%s", s);
    fflush(stdin);

    printf("Result: %s\n\n", s);

    printf("Type something (scanf enhanced): \n");
    scanf("%9[^\n]s", s);
    fflush (stdin);

    printf("Result: %s\n\n", s);
}