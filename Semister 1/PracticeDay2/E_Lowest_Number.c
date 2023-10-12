/*
Problem C : Lowest Number And Position Print ;
Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
*/

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min, position;
    min = INT_MAX;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < min)
        {
            min = arr[j];
            position = j + 1;
        }
    }
    printf("%d %d\n", min, position);
    return 0;
}