#include <stdio.h>
int main()
{
    //Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
    int a, b;
    scanf("%d %d", &a, &b);
    if (a >= b)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}