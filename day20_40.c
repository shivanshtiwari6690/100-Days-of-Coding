#include <stdio.h>

int main()
{
    int n, digit, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0)
        {
            complement = complement + 1 * place;
        }
        else if (digit == 1)
        {
            complement = complement + 0 * place;
        }
        else
        {
            printf("Invalid binary number.\n");
            return 0;
        }

        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %d\n", complement);

    return 0;
}