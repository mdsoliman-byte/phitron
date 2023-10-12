/*
You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.

*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = n - 1; j >= 0; j--)
    {
        if (j % 2 == 1)
        {
            printf("%d ", arr[j]);
        }
    }

    return 0;
}