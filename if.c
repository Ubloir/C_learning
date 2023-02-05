#include <stdio.h>

int main()
{
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("\n\nYou are now signed!");
    }
    else if (age < 0)
    {
        printf("\nHaha, very funny! Stop messing around.");
    }
    else if (age == 0)
    {
        printf("\nYou can't sing up, you were just born!");
    }
    else
    {
        printf("You're too young to use this site");
    }

    return 0;
}