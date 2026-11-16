#include <stdio.h>

int main()
{
    int dd, mm, yyyy;

    char months[12][4] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm >= 1 && mm <= 12)
    {
        printf("Formatted date: %02d-%s-%d",
               dd, months[mm - 1], yyyy);
    }
    else
    {
        printf("Invalid month!");
    }

    return 0;
}