#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    // Finding first repeating character
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (count[str[i] - 'a'] == 1)
            {
                printf("First repeating alphabet = %c", str[i]);
                found = 1;
                break;
            }

            count[str[i] - 'a']++;
        }
    }

    if (found == 0)
    {
        printf("No repeating lowercase alphabet found.");
    }

    return 0;
}