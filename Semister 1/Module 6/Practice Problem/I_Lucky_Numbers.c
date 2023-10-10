#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 10; i <= 100; i++)
    {
        if (n % i == 0)
        {
            printf("YES");
            break;
        }
        else
        {
            printf("NO");
            break;
        }
    }
    return 0;
}