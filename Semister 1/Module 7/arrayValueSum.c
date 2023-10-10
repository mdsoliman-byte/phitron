#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hello[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &hello[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + hello[i];
    }
    printf("%d", sum);

    return 0;
}