/*
Power calculation:
Write a program to calculate the power of a number (x^n) using a for loop.
*/
#include <stdio.h>
int main()
{
    int i, power;
    scanf("%d", &power);
    for (i = 1; i <= power; i = i + 1)
    {
        printf("%d\n", i);
    }
    return 0;
}