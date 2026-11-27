#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int count[100] = {0};

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        count[arr[i]]++;

        if (count[arr[i]] == 2)
        {
            printf("Repeated element: %d", arr[i]);
            return 0;
        }
    }

    return 0;
}