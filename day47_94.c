#include <stdio.h>

int main()
{
    char str[200], word[100], longest[100];
    int i, j, length = 0, max = 0;

    printf("Enter a sentence: ");
    scanf("%199[^\n]", str);

    // Finding the longest word
    for (i = 0; ; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word[length] = str[i];
            length++;
        }
        else
        {
            word[length] = '\0';

            if (length > max)
            {
                max = length;

                for (j = 0; j <= length; j++)
                {
                    longest[j] = word[j];
                }
            }

            length = 0;

            if (str[i] == '\0')
            {
                break;
            }
        }
    }

    printf("Longest word = %s\n", longest);
    printf("Length of longest word = %d", max);

    return 0;
}