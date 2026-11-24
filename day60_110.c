#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int max;

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

    printf("Maximum elements in each window: ");

    // Finding maximum in each window
    for (i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for (j = i; j < i + k; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}