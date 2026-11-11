#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    // Counting frequency
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}