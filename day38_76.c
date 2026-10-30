#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, flag = 1;

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

    // Checking symmetric matrix
    if (r != c)
    {
        flag = 0;
    }
    else
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (a[i][j] != a[j][i])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 0)
            {
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("The matrix is symmetric.");
    }
    else
    {
        printf("The matrix is not symmetric.");
    }

    return 0;
}