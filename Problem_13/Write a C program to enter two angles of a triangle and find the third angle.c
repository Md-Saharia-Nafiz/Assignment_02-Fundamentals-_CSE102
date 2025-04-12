#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    // Input two angles from the user
    printf("Enter the first angle of the triangle: ");
    scanf("%f", &angle1);

    printf("Enter the second angle of the triangle: ");
    scanf("%f", &angle2);

    // Calculate the third angle
    angle3 = 180 - (angle1 + angle2);

    // Display the result
    printf("The third angle of the triangle is: %.2f degrees\n", angle3);

    return 0;
}
