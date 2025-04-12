#include <stdio.h>

int main() {
    float base, height, area;

    // Input base and height of the triangle
    printf("Enter base of the triangle: ");
    scanf("%f", &base);

    printf("Enter height of the triangle: ");
    scanf("%f", &height);

    // Calculate area of the triangle
    area = 0.5 * base * height;

    // Display the result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
