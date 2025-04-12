
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Ask the user to input the temperature in Fahrenheit
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert the temperature to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output the result
    printf("The temperature in Celsius is: %.2f°C\n", celsius);

    return 0;
}
