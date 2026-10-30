#include <stdio.h>

int main()
{
    int a[100], n, i, key, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in ascending order:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    pos = n;

    // Find the appropriate position
    for (i = 0; i < n; i++)
    {
        if (a[i] > key)
        {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert the element
    a[pos] = key;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}