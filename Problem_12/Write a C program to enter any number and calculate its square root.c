
#include <stdio.h>
#include <math.h>

int main() {
    double num, sqrt_result;

    // Input from the user
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Error: Square root of a negative number is not defined in real numbers.\n");
    } else {
        // Calculate square root
        sqrt_result = sqrt(num);

        // Display the result
        printf("The square root of %.2lf is %.2lf\n", num, sqrt_result);
    }

    return 0;
}
