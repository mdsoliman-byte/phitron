/*
Problem D : Position In Array
Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
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
    for (int j = 0; j < n; j++)
    {
        if (arr[j] <= 10)
        {
            printf("A[%d] = %d\n", j, arr[j]);
        }
    }

    return 0;
}