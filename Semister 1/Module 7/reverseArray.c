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
    for (int i = 0; i < n; i++)
    {
        printf("Array %d = %d\n", i, shakil[i]);
    }

    return 0;
}