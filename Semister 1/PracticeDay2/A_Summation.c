/*
Problem A : A Sumation
problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
    }
    if (sum < 0)
    {
        sum = sum * -1;
    }
    printf("%lld\n", sum);
    return 0;
}