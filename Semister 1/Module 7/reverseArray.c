#include <stdio.h>
int main()
{
    int n; // input array size
    scanf("%d", &n);
    int shakil[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &shakil[i]);
    }
    for (int i = n - 1; i >= 0; i = i - 1)
    {
        printf("Array %d = %d\n", i, shakil[i]);
    }

    return 0;
}