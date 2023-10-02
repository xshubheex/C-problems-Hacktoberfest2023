#include<stdio.h>

int main ()
{
    // Defining function
    int n;
    printf("Enter an integer n of your choice:");
    scanf("%d", &n);

    // Writing formula to calculate the sum of first n natural number
    int sum = ( n * ( n + 1)) / 2;

    //Printing result
    printf("Sum of the first %d natural numbers is %d\n", n, sum);

    return 0;
}