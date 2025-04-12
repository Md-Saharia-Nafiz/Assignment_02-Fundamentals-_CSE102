#include <stdio.h>
#include <math.h>

// Function to calculate power using loop
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double x;
    int y;

    // Input base and exponent
    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    // Calculate power using pow() function
    double result1 = pow(x, y);

    // Calculate power using loop function
    double result2 = power(x, y);

    // Display results
    printf("Using pow() function: %.2lf^%d = %.2lf\n", x, y, result1);
    printf("Using loop method: %.2lf^%d = %.2lf\n", x, y, result2);

    return 0;
}

