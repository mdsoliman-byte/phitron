/*
Factorial calculation:
Write a program to calculate the factorial of a given number using a for loop.
*/

#include <stdio.h>

int main()
{
    int i, fact, user;
    scanf("%d", &user);
    fact = 1;
    for (i = 1; i <= user; i = i + 1)
    {
        fact = fact * i;
    }
    printf("%d", fact);
    return 0;
}