#include <stdio.h>

int main()
{
    int a[10][10], sum[10];
    int r, c, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("Enter the elements of the matrix:\n");

    // Reading matrix elements
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculating sum of each row
    for (i = 0; i < r; i++)
    {
        sum[i] = 0;

        for (j = 0; j < c; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    // Displaying row sums
    printf("Sum of each row:\n");

    for (i = 0; i < r; i++)
    {
        printf("Row %d sum = %d\n", i + 1, sum[i]);
    }

    return 0;
}