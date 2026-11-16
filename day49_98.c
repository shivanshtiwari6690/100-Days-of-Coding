#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter your full name: ");
    scanf("%99[^\n]", name);

    // Finding the starting position of surname
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            last = i + 1;
        }
    }

    printf("Formatted name: ");

    // Printing initials of first and middle names
    for (i = 0; i < last - 1; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            printf("%c.", name[i]);
        }
    }

    // Printing full surname
    for (i = last; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}