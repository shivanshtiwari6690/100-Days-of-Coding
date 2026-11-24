#include <stdio.h>

int main()
{
    int nums[100], answer[100];
    int n, i, product;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Calculating product for each element
    for (i = 0; i < n; i++)
    {
        product = 1;

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    printf("Product array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if (i < n - 1)
        {
            printf(",");
        }
    }

    return 0;
}