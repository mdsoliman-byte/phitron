#include <stdio.h>
int main()
{
    // int i, user;
    // scanf("%d", &user);
    // for (i = 1; i <= user; i = i + 1)
    // {
    //     if (i % 3 == 0 && i % 7 == 0)
    //     {

    //         printf("%d\n", i);
    //     }
    // }

    int i;
    scanf("%d", &i);
    if (i > 1000)
    {
        printf("I will buy Punjabi");
        i = i - 1000;
        if (i > 500)
        {
            printf("I will buy new shoes");
            i = i - 500;
        }
        if (i >= 500)
        {
            printf("Alisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}