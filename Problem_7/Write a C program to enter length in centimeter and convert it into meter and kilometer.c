#include <stdio.h>

int main() {
    float lengthInCm, lengthInM, lengthInKm;

    // Ask the user to input the length in centimeters
    printf("Enter the length in centimeters: ");
    scanf("%f", &lengthInCm);

    // Convert the length to meters and kilometers
    lengthInM = lengthInCm / 100;
    lengthInKm = lengthInCm / 100000;

    // Output the results
    printf("Length in meters: %.2f m\n", lengthInM);
    printf("Length in kilometers: %.5f km\n", lengthInKm);

    return 0;
}
