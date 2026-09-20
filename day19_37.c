#include <stdio.h>

int main()
{
    int a, b, lcm, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        lcm = a;
    else
        lcm = b;

    for (i = lcm; ; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM = %d\n", lcm);

    return 0;
}