#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    // Finding length of string
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    // Reversing the string
    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string = %s", str);

    return 0;
}