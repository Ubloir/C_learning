#include <stdio.h>

int main()
{

    char grade;

    printf("\nEneter a letter grade: ");
    scanf("%c", &grade);

    /*if (grade == 'A' || 'a')
    {
        printf("\nPerfect grade!");
    }*/
    switch (grade)
    {
    case 'A':
    case 'a':
        printf("\nPerfect!");
        break;
    case 'B':
    case 'b':
        printf("\nYou did good!");
        break;
    case 'C':
    case 'c':
        printf("\nYou did okay!");
        break;
    case 'D':
    case 'd':
        printf("\nAt least it's not an F");
        break;
    case 'F':
    case 'f':
        printf("\nYOU FAILED NOOB!");
        break;
    default:
        printf("\nPlease eneter only valid grade (range A - F)");
    }

    return 0;
}