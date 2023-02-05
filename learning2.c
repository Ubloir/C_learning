#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];
    char surname[25];
    int age;

    printf("What's your name?: ");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    // printf("What's your surname?: ");
    // scanf("%s", &surname);

    printf("How old are you?: ");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name); // printf("\nHello %s %s, how are you?", name, surname);
    printf(" You are %d years old.", age);

    return 0;
}