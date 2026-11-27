#include <stdio.h>

int main()
{
    int n, i, sum = 0, total, missing;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("Missing number: %d", missing);

    return 0;
}