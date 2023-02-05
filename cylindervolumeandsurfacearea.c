#include <stdio.h>
#include <math.h>

int main()
{

    double Pi = 3.14159;
    double radius;
    double h;

    printf("Please enter the radius: ");
    scanf("%lf", &radius);

    printf("Please enter the height(h): ");
    scanf("%lf", &h);

    double base_surface = (2 * Pi) * pow(radius, 2);
    double side_surface = (2 * Pi * radius) * h;
    double total_surface = base_surface + side_surface;
    double volume = (Pi * pow(radius, 2) * h);

    printf("\nCylinder's base surface is: %lf", base_surface);
    printf("\nCylinder's side surface is: %lf", side_surface);
    printf("\nCylinder's total surface is: %lf", total_surface);
    printf("\nCylinder's volume is: %lf", volume);

    return 0;
}