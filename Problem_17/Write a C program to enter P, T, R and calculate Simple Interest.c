
#include <stdio.h>

int main() {
    float P, T, R, SI;

    // Taking input from user
    printf("Enter Principal amount (P): ");
    scanf("%f", &P);

    printf("Enter Time in years (T): ");
    scanf("%f", &T);

    printf("Enter Rate of interest (R): ");
    scanf("%f", &R);

    // Calculating Simple Interest
    SI = (P * T * R) / 100;

    // Displaying the result
    printf("\nSimple Interest = %.2f\n", SI);

    return 0;
}
