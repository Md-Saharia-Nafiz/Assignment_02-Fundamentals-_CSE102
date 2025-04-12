#include <stdio.h>

int main() {
    // Declare two variables to store the input numbers
    float num1, num2, sum;

    // Ask the user to enter the first number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Ask the user to enter the second number
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, sum);

    return 0;
}
