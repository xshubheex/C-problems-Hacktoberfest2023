#include <stdio.h>

int main() {
    int num, range;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the range: ");
    scanf("%d", &range);
    
    // Print the multiplication table
    printf("Multiplication table of %d up to %d:\n", num, range);
    
    for (int i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
