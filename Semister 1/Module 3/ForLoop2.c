#include <stdio.h>
int main()
{
    int i;
    // for (i = 1; i <= 5; i++)
    // {
    //     printf("%d\n", i);
    // }
    // for (i = 2; i <= 20; i = i + 2)
    // {
    //     printf("%d\n", i);
    // }
    for (i = 10; i >= 1; i = i - 1)
    {
        // 10, 9, ......2,1
        printf("%d\n", i);
    }

    return 0;
}