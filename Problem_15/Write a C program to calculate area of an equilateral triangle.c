#include <stdio.h>
#include <math.h>

int main() {
    double side, area;

    // Taking input from user
    printf("Enter the length of a side of the equilateral triangle: ");
    scanf("%lf", &side);

    // Calculating area
    area = (sqrt(3) / 4) * side * side;

    // Displaying the result
    printf("The area of the equilateral triangle is: %.2lf\n", area);

    return 0;
}
