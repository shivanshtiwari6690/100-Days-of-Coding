#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int leftsum, rightsum;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Checking each index
    for (i = 0; i < n; i++)
    {
        leftsum = 0;
        rightsum = 0;

        // Calculating left sum
        for (j = 0; j < i; j++)
        {
            leftsum = leftsum + arr[j];
        }

        // Calculating right sum
        for (j = i + 1; j < n; j++)
        {
            rightsum = rightsum + arr[j];
        }

        if (leftsum == rightsum)
        {
            pivot = i;
            break;
        }
    }

    printf("Pivot index = %d", pivot);

    return 0;
}