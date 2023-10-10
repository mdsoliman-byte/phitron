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
    for (int i = 0; i < n; i++)
    {
        if (hello[i] % 2 ==0)
        {
            printf("Array %d = %d\n", i , hello[i]);
        }
        
    }
    

    return 0;
}