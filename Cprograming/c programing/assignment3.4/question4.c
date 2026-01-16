#include <stdio.h>

#define PI 3.14159

int main() {
    int choice;
    float radius, length, width, base, height, area;

    // Display menu
    printf("Menu:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Process user choice
    switch (choice) {
        case 1:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of the circle = %.2f", area);
            break;

        case 2:
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of the rectangle = %.2f", area);
            break;

        case 3:
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle = %.2f", area);
            break;

        default:
            printf("Invalid option selected.");
    }

    return 0;
}
