#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if (n >= 'a' && n <= 'z')
    {
        if (n == 'z')
        {
            n = "a";
        }
        char next = n + 1;
        printf("%c", next);
    }
    return 0;
}