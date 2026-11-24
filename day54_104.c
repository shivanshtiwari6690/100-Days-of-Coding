#include <stdio.h>

int main()
{
    int n, x, i;
    int leftsum, rightsum;
    int pivot = -1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Checking every number from 1 to n
    for (x = 1; x <= n; x++)
    {
        leftsum = 0;
        rightsum = 0;

        // Calculating sum from 1 to x
        for (i = 1; i <= x; i++)
        {
            leftsum = leftsum + i;
        }

        // Calculating sum from x to n
        for (i = x; i <= n; i++)
        {
            rightsum = rightsum + i;
        }

        if (leftsum == rightsum)
        {
            pivot = x;
            break;
        }
    }

    printf("Pivot integer = %d", pivot);

    return 0;
}