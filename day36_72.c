#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, sum = 0;

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
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all matrix elements = %d", sum);

    return 0;
}