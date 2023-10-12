/*
Problem B : Searching 
Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
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
    int user;
    scanf("%d", &user);
    int ans = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == user)
        {
            ans = j;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}