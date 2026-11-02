#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    // Counting characters
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("Number of characters = %d", count);

    return 0;
}