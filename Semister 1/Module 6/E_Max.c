#include <stdio.h>
#include <limits.h>
int main()
{
    // int n;
    // scanf("%d", &n);
    // int a;
    // int b = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     scanf("%d", &a);
    //     if (a > b)
    //     {
    //         b = a;
    //     }
    // }
    // printf("%d", b);
    int a, b;
    scanf("%d", &a);
    
    int max = INT_MIN, min = INT_MAX;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        if (b < min)
        {
            min = b;
        }
    }
    printf("%d", b);
    return 0;
}