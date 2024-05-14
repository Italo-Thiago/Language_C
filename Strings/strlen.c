#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char s[N];
    int i;

    printf("Enter a text:\n");
    gets(s);
    i = strlen(s);
    printf("\nText size: %d\n\n", i);

    printf("Position-by-position printing:\n");
    for (i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    // puts(s) also works
}