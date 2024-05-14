#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    if(argc > 1)
    {
        printf("%d Arguments were inserted:\n", argc);
        for(i = 0;i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }
    else
    {
        printf("No arguments were entered.\n");
    }
}