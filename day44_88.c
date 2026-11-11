#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    // Replacing spaces with hyphens
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
    }

    printf("String after replacement = %s", str);

    return 0;
}