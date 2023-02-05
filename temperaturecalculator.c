#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or in (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\nEnter the temp in Celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Fahrenheit is: %.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celcius is: %.1f", temp);
    }
    else
    {
        printf("\n%c is not a valid unit of temperature measurement", unit);
    }

    return 0;
}