#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    // Find the largest element
    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    // Find the second largest element
    second = -2147483648;

    for (i = 0; i < n; i++)
    {
        if (a[i] > second && a[i] < largest)
        {
            second = a[i];
        }
    }

    if (second == -2147483648)
    {
        printf("Second largest element does not exist.");
    }
    else
    {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}