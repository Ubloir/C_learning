#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;

    printf("\nEnter side a: ");
    scanf("%lf", &a);

    printf("\nEnter side b: ");
    scanf("%lf", &b);

    double c = sqrt(a * a + b * b);

    printf("\nSide C is: %lf", c);

    return 0;
}