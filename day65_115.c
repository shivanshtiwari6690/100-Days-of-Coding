#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int i, count[26] = {0};
    int flag = 1;

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if (strlen(s) != strlen(t))
    {
        flag = 0;
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}