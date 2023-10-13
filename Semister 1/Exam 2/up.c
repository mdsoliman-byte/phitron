/*
You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way
*/

#include <stdio.h>
int main()
{
    int n, ind, val;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int t = n - 1; t >= 0; t--)
    {
        scanf("%d %d", &ind, &val);
        if (t == ind)
        {
            arr[t] = val;
        }
        printf("%d ", arr[t]);
    }

    return 0;
}