#include <stdio.h>

int main()
{
    int arr[100], n, x;
    int i, low, high, mid;
    int ceil = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ceil = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Index of ceil = %d", ceil);

    return 0;
}