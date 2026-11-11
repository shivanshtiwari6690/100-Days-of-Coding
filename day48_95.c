#include <stdio.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int i, j, len1 = 0, len2 = 0, flag = 0;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    // Finding lengths
    for (i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        len2++;
    }

    // Checking lengths
    if (len1 == len2)
    {
        // Concatenating first string with itself
        for (i = 0; i < len1; i++)
        {
            temp[i] = str1[i];
        }

        for (i = 0; i < len1; i++)
        {
            temp[len1 + i] = str1[i];
        }

        temp[2 * len1] = '\0';

        // Checking second string
        for (i = 0; i < len1; i++)
        {
            for (j = 0; j < len2; j++)
            {
                if (temp[i + j] != str2[j])
                {
                    break;
                }
            }

            if (j == len2)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("The strings are rotations of each other.");
    }
    else
    {
        printf("The strings are not rotations of each other.");
    }

    return 0;
}