/**
 * @file 023.c
 * @author Italo Thiago
 * @brief Write a program that reads a sentence from the keyboard and displays 
 * @brief How many times does the letter "A" appear?
 * @brief In what position does it first appear?
 * @brief In what position did it last appear?
 * @version 0.1
 * @date 2024-06-29
 */

/*
-------------------------------------------------------------------------------
(PT-BR)
O programa possui um erro onde não consegue analisar a frase por completo, portanto não consegue encontrar com precisão a ultima letra 'A'

(ENG)
The program has an error where it cannot analyze the sentence completely, therefore it cannot accurately find the last letter 'A'
-------------------------------------------------------------------------------
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countOccurrences(const char *sentence, char target)
{
    int count = 0;
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (tolower(sentence[i]) == target)
        {
            count++;
        }
    }
    return count;
}

int firstOccurrence(const char *sentence, char target)
{
    int occurrence = 0;
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == target)
        {
            occurrence = i;
            break;
        }
    }
}

int lastOccurrence(const char *sentence, char target)
{
    int occurrence = 0;
    for (int i = 0; i < sizeof(sentence); i++)
    {
        if (sentence[i] == target)
        {
            occurrence = i;
        }
    }
    return occurrence;
}


int main()
{
    char sentence[100];
    printf("Enter a sentence: ");
    scanf("%s", sentence); 

    char cleanedSentence[100];
    int count = 0;
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (!isspace(sentence[i]))
        {
            cleanedSentence[count] = tolower(sentence[i]);
            count++;
        }
    }
    cleanedSentence[count] = '\0';

    int aOccurrence = countOccurrences(cleanedSentence, 'a');
    printf("The letter A appears %d times in the sentence.\n", aOccurrence);

    int firstAOccurrence = firstOccurrence(cleanedSentence, 'a');
    printf("The first letter A appears in position %d\n", ++firstAOccurrence);

    int lastAOccurrence = lastOccurrence(cleanedSentence, 'a');
    printf("The last letter A appears in position %d\n", ++lastAOccurrence);

    return 0;
}