#include <stdio.h>

int main() {
    float length, breadth, area;

    // Ask the user for input
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate the area
    area = length * breadth;

    // Output the result
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
