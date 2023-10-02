#include <stdio.h>

#define PI 3.141

int main() {
    int choice;
    
    printf("Choose the desired shape :\n");
    printf("1. Triangle\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");

    printf("Enter your choice\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1: {
            double base, height, area;
            printf("Enter the base of triangle: ");
            scanf("%lf", &base);
            printf("Enter the height of triangle: ");
            scanf("%lf", &height);
            area = 0.5 * base*height;
            printf("Area of the triangle is: %.2lf\n", area);
            break;
        }

        case 2: {
            double length, width, area;
            printf("Enter the length of rectangle: ");
            scanf("%lf", &length);
            printf("Enter the width of rectangle: ");
            scanf("%lf", &width);
            area = length*width;
            printf("Area of rectangle is: %.2lf\n", area);
            break;
        }

        case 3: {
            double radius, area;
            printf("Enter the radius of circle: ");
            scanf("%lf", &radius);
            area = PI * radius*radius;
            printf("Area of circle is: %.2lf\n", area);
            break;
        }
        default:
            printf("You entered wrong choice.\n");
    }
    return 0;
}

