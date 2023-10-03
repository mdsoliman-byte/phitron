/*
Calculate the sum of numbers from 1 to 100:
Write a program to calculate and print the sum of numbers from 1 to 100 using a for loop.
*/

#include <stdio.h>
int main()
{
    int i, sum;
    sum = 0;
    for (i = 1; i <= 100; i = i + 1)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}