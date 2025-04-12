#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    // Ask the user to input the number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate years, weeks, and remaining days
    years = days / 365;             // 1 year = 365 days
    weeks = (days % 365) / 7;       // Remaining days after calculating years, 1 week = 7 days
    remainingDays = (days % 365) % 7;  // Remaining days after calculating weeks

    // Output the result
    printf("%d days is equivalent to %d years, %d weeks, and %d days.\n", days, years, weeks, remainingDays);

    return 0;
}
