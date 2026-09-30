#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter number of groups: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        printf("\n");

        for (j = 1; j <= i; j++)
        {
            printf("*\n");
        }
    }

    return 0;
}