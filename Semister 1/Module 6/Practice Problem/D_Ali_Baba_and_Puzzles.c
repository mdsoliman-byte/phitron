#include <stdio.h>
int main()
{
    int a, b, c, d, ans1, ans2;
    scanf("%d %d %d %d ", &a, &b, &c, &d);

    ans1 = a + b * c;
    // printf("%d", ans1);
    if (ans1 == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}