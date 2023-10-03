#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age of a person: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Person with age %d is an eligible voter.", age);
    else
        printf("Person with age %d is not an eligible voter.", age);
    return 0;
}