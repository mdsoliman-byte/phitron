#include <stdio.h>
int main()
{
    int i;
    // scanf("%d", i);
    while (scanf("%d", &i) != EOF)
    {
        /*
        EOF = End Of File
        its a file formate 
        */
        if (i == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
            continue;
        }
    }

    // if (i == 1999)
    // {
    //     printf("Correct\n");
    // }
    // else
    // {
    //     printf("Wrong");
    // }
    return 0;
}