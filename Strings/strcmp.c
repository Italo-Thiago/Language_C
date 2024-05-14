#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char hardText[N] = {"/exit"};
    char password_usr[N];
    int ok;

    printf("Enter a text:\n");
    gets(password_usr);

    ok = strcmp(hardText, password_usr);

    if (ok == 0)
        printf("Same texts.\n");
    else
        printf("Different texts.\n");
}