#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka == 100 || taka>100 && taka <=999 ) // if is a contitonal statement and || is a logical statement 
    {
        printf("Can i eiting burgur ");
    }
    else
    {
        printf("ami kichu khabo na ");
    }
    return 0;
}