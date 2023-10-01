#include <stdio.h>

int main ()
{
    int n;
    int sum = 0;

    // Asking the user to input data
    printf("Enter a integer n of your choice: ");
    scanf("%d", &n);

    // Checking if integer n is valid or not
    if (n <= 0){
        printf("Enter a valid integer.\n");
    }
    else
    {
      // calculation of n natural numbers
      for (int i = 1; i <= n; i++)
      {
        sum += i;
      }
       //printing the result 
       printf("The sum of first %d natural number is: %d\n", n, sum);
    }
    return 0;
}