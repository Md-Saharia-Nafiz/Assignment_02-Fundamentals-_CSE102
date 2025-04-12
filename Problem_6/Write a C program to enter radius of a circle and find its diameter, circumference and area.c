
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
Explanation:
The program prompts the user to input the length and breadth of the rectangle.
It then calculates the area by multiplying the length and breadth.
Finally, it displays the result with two decimal places using %.2f.
You can compile and run this program in any C compiler, and it will ask for the length and breadth and then output the area.



You said:
Write a C program to enter radius of a circle and find its diameter, circumference and area.
ChatGPT said:
Here is a C program that calculates the diameter, circumference, and area of a circle based on the given radius:

c
Copy
Edit
#include <stdio.h>
#define PI 3.14159  // Define the value of PI

int main() {
    float radius, diameter, circumference, area;

    // Ask the user to input the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the diameter, circumference, and area
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // Output the results
    printf("Diameter of the circle: %.2f\n", diameter);
    printf("Circumference of the circle: %.2f\n", circumference);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
