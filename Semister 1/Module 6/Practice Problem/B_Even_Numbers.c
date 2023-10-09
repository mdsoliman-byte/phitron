#include <stdio.h>
int main()
{
    int user;
    scanf("%d", &user);
    if (user == 1)
    {
        printf("-1\n");
    }
    else
    {
        for (int i = 1; i <= user; i++)
        {

            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}