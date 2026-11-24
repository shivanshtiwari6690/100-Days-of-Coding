#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int negative;

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

    printf("First negative elements in each window: ");

    // Checking each window
    for (i = 0; i <= n - k; i++)
    {
        negative = 0;

        // Searching for first negative element
        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                negative = arr[j];
                break;
            }
        }

        printf("%d ", negative);
    }

    return 0;
}