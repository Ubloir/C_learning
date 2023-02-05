#include <stdio.h>
#include <math.h>

int main()
{
    double Pi = 3.14159;
    double r;

    printf("Please enter the sphere's radius: ");
    scanf("%lf", &r);

    double d = 2 * r;
    double volume = (4.0f / 3.0f) * Pi * pow(r, 3);
    double surface = (4 * Pi) * pow(r, 2);

    printf("Sphere's diameter is: %lf", d);
    printf("\nSphere's volume is: %lf", volume);
    printf("\nSphere's total surface is: %lf", surface);

    return 0;
}