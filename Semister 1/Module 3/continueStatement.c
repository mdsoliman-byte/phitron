#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i = i + 1) // initilaigation , condition , increment 
    {
        if(i == 5 ){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}