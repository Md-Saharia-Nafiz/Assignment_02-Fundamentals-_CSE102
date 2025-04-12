#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform all arithmetic operations
    printf("\nSelect the operation (+, -, *, /, %%): ");
    printf("\nAddition (+): %.2f\n", num1 + num2);
    printf("Subtraction (-): %.2f\n", num1 - num2);
    printf("Multiplication (*): %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("Division (/): %.2f\n", num1 / num2);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    if (num2 != 0) {
        printf("Modulus (%%): %.0f\n", (int)num1 % (int)num2);
    } else {
        printf("Modulus by zero is not allowed.\n");
    }

    return 0;
}
