#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    scanf("%99[^\n]", name);

    printf("Initials: ");

    // Print first character
    printf("%c", name[0]);

    // Print characters after spaces
    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            printf(".%c", name[i + 1]);
        }
    }

    printf(".");

    return 0;
}