#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;
    double h;

    printf("\nPlease enter base a: ");
    scanf("%lf", &a);

    printf("\nPlease enter base b: ");
    scanf("%lf", &b);

    printf("\nPlease enter height of the trapezoid h: ");
    scanf("%lf", &h);

    double P = (a + b) / 2 * h;

    printf("\nThe area of trapezoid is equal to: %lf", P);

    return 0;
}