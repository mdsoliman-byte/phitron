#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 5000)
    {
        printf("Coxs bazer jabo \n");
        if (taka >= 1000)
        {
            printf("Sentmartin Jabo\n ");
        }
        else
        {
            printf("kothao jabo na \n ");
        }
    }
    else
    {
        printf("Kothao jabo na \n");
    }
    return 0;
}