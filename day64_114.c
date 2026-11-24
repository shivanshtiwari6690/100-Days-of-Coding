#include <stdio.h>

int main()
{
    char s[100];
    int i, j, k;
    int count, maxLength = 0;
    int repeat;

    printf("Enter a string: ");
    scanf("%99s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        count = 0;

        for (j = i; s[j] != '\0'; j++)
        {
            repeat = 0;

            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if (repeat == 1)
            {
                break;
            }

            count++;
        }

        if (count > maxLength)
        {
            maxLength = count;
        }
    }

    printf("Length of longest substring = %d", maxLength);

    return 0;
}