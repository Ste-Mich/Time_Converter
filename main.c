#include <stdio.h>
#include <stdbool.h>

int main()
{
    int minutes;
    double days, years;

    printf("Give me the minutes: ");

    scanf("%i", &minutes);

    days = (double)minutes / (60 * 24);
    years = (double)minutes / (60 * 24 * 365);

    printf("\n minutes: %i is days: %f and years: %f \n", minutes, days, years);

    printf("Press any key to continue \n");
    scanf("%i", &minutes);

    return 0;
}