#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;

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

    // Printing transpose
    printf("Transpose of the matrix:\n");

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}