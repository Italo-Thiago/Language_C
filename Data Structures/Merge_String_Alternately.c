#include <stdio.h>

char * mergeAlternately()
{
    char* word1[10] = {'a', 'b', 'c'};
    char* word2[10] = {'p', 'q', 'r'};
    for (int i = 0; i < sizeof(word1); i++)
    {
        return word1[i];
    }
}

int main()
{


    char word[10] = mergeAlternately();

    printf("%s\n", word);

    return 0;
}