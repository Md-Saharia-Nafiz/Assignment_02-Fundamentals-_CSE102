#include <stdio.h>

int main() {
    float length, breadth, perimeter;

    // Taking input from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculating the perimeter of the rectangle
    perimeter = 2 * (length + breadth);

    // Displaying the result
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}
