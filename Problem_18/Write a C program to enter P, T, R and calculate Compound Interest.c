#include <stdio.h>
#include <math.h>

int main() {
    double P, T, R, A, CI;

    // Taking input from user
    printf("Enter Principal amount (P): ");
    scanf("%lf", &P);

    printf("Enter Time in years (T): ");
    scanf("%lf", &T);

    printf("Enter Rate of interest (R): ");
    scanf("%lf", &R);

    // Calculating Final Amount (A)
    A = P * pow((1 + R / 100), T);

    // Calculating Compound Interest
    CI = A - P;

    // Displaying the result
    printf("\nCompound Interest = %.2lf\n", CI);
    printf("Total Amount = %.2lf\n", A);

    return 0;
}

