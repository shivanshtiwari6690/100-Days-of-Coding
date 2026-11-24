#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int previous;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements: ");

    for (i = 0; i < n; i++)
    {
        previous = -1;

        // Searching for previous greater element
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                previous = arr[j];
                break;
            }
        }

        printf("%d", previous);

        if (i < n - 1)
        {
            printf(",");
        }
    }

    return 0;
}