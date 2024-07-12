/**
 * @file 039.c
 * @author Italo Thiago
 * @brief Create a program that makes the computer play Jokenpô with you 
 * @version 0.1
 * @date 2024-07-09
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char ItemMove(char name[], int number)
{
    switch (number)
    {
        case 0:
            return printf("%s move Stone\n", name);
            break;
        case 1:
            return printf("%s Paper\n", name);
            break;
        case 2:
            return printf("%s Scissors\n", name);
            break;
        default:
            return printf("%s Missing Data\n", name);
            break;
    }
}

int main()
{
    system("cls");

    srand(time(NULL));
    int random = rand() % 3; 

    printf("Your options: \n");
    printf("[ 0 ] Stone.\n");
    printf("[ 1 ] Paper.\n");
    printf("[ 2 ] Scissors.\n");

    printf("What's your move?: ");
    int choose = 0; 
    scanf("%d", &choose);

    ItemMove("Player", choose);
    ItemMove("Computer", random);

    if (random == 0) // Stone
    {
        switch (choose)
        {
            case 0:
                return printf("A TIE.\n");
                break;
            case 1: 
                return printf("PLAYER WINS.\n");
                break;
            case 2:
                return printf("COMPUTER WINS.\n");
                break;
            default:
                return printf("INVALID MOVE.\n");
                break;
        }
    }
    else if (random == 1) // Paper
    {
    switch (choose)
    {
        case 0:
            return printf("COMPUTER WINS.\n");
            break;
        case 1: 
            return printf("A TIE.\n");
            break;
        case 2:
            return printf("PLAYER WINS.\n");
            break;
        default:
            return printf("INVALID MOVE.\n");
            break;
        }
    }
    else if (random == 2) // Scissors
    {
    switch (choose)
    {
        case 0:
            return printf("PLAYER WINS.\n");
            break;
        case 1: 
            return printf("COMPUTER WINS.\n");
            break;
        case 2:
            return printf("A TIE.\n");
            break;
        default:
            return printf("INVALID MOVE.\n");
            break;
        }
    }
    
    return 0;
}