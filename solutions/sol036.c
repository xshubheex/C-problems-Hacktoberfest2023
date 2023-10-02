// Write a C language program to explain the break statement with the help of an example using three loops (while, DO While and For Loop).

#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("1. Perform While Loop\n");
        printf("2. Perform For Loop\n");
        printf("3. Or-else Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            
            case 1:
                // Demonstrating 'break' with a while loop
                printf("Using 'break' with a while loop:\n");
                int i = 1;
                while (i <= 10) {
                    printf("%d ", i);
                    if (i == 5) {
                        printf("(Breaking the loop)");
                        break;
                    }
                    i++;
                }
                printf("\n\n");
                break;

            case 2:
                // Demonstrating 'break' with a for loop
                printf("Using 'break' with a for loop:\n");
                for (int k = 1; k <= 10; k++) {
                    printf("%d ", k);
                    if (k == 5) {
                        printf("(Breaking the loop)");
                        break;
                    }
                }
                printf("\n\n");
                break;

            case 3:
                // Exiting the program
                printf("Exit the program\n");
                return 0;

            default:
                printf("The choice you entered is in-correct\n\n");
                break;
        }
    }
    return 0;
}
