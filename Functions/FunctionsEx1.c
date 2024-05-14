#include <stdio.h>

float bigger(float num1, float num2)
{
    if(num1 > num2)
        return num1;
    else
        return num2;
}

int main()
{
    float x, y, m;
    printf("Enter a value:\n");
    scanf("%f", &x);
    printf("Enter one more value:\n");
    scanf("%f", &y);

    m = bigger(x,y);
    printf("Bigger: %.2f\n", m);
}