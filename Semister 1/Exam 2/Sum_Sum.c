/*
You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.
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
    int pSum = 0;
    int nSum = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
            nSum = arr[j] + nSum;
        }
        if (arr[j] > 0)
        {
            pSum = arr[j] + pSum;
        }
    }

    printf("%d %d",pSum,nSum);
    return 0;
}