#include <stdio.h>

int main()
{
    char str[200], temp;
    int i, start = 0, end;

    printf("Enter a sentence: ");
    scanf("%199[^\n]", str);

    // Reversing each word
    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }

        if (str[i] == '\0')
        {
            break;
        }
    }

    printf("String after reversing each word = %s", str);

    return 0;
}