#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int x = 0; x < n; x++)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}