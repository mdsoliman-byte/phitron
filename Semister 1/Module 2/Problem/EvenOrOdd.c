/*
Even or Odd:
Write a program to check if a given integer is even or odd.
*/
#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d this number is Even Number ", number);
    }
    else
    {
        printf("%d this number is odd number ", number);
    }

    return 0;
}