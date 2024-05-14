#include <stdio.h>

int main() 
{
    int dice = 10;
    printf("Given before increment: %d.\n", dice);

    dice++;
    printf("After increment: %d.\n", dice);

    dice--;
    printf("After decrement: %d.\n", dice);

    dice += 3;
    printf("After increment of 3 units: %d.\n", dice);

    dice -= 2;
    printf("After decrement of 2 units: %d.\n", dice);

    dice *= 10;
    printf("After multiplying by 10: %d.\n", dice);
}