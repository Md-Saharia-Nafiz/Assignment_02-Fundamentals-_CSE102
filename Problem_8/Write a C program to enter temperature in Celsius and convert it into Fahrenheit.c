#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Ask the user to input the temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert the temperature to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output the result
    printf("The temperature in Fahrenheit is: %.2f°F\n", fahrenheit);

    return 0;
}
