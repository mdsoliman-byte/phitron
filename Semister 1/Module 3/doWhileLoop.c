#include <stdio.h>
int main()
{
    int i;
    i = 1; // inilitigation
    do     // work
    {
        printf("%d\n", i);
        i = i + 1;     // increment / decrement
    } while (i <= 14); // condition
    return 0;
}