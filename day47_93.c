#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    // Counting characters of first string
    for (i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++;
    }

    // Counting characters of second string
    for (i = 0; str2[i] != '\0'; i++)
    {
        count[(unsigned char)str2[i]]--;
    }

    // Checking character frequency
    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("The strings are anagrams.");
    }
    else
    {
        printf("The strings are not anagrams.");
    }

    return 0;
}