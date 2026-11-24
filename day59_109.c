#include <stdio.h>

int main()
{
    int arr[100], n, k, i;
    int sum = 0, maxsum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid value of k");
        return 0;
    }

    // Calculating sum of first k elements
    for (i = 0; i < k; i++)
    {
        sum = sum + arr[i];
    }

    maxsum = sum;

    // Checking remaining subarrays
    for (i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxsum)
        {
            maxsum = sum;
        }
    }

    printf("Maximum subarray sum = %d", maxsum);

    return 0;
}