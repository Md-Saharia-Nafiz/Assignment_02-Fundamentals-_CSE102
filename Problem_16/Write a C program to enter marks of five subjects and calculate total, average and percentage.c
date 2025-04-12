#include <stdio.h>

int main() {
    float marks[5], total = 0, average, percentage;
    int i;

    // Taking input for 5 subjects
    printf("Enter marks of five subjects: \n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i]; // Summing up the marks
    }

    // Calculating average and percentage
    average = total / 5;
    percentage = (total / 500) * 100; // Assuming each subject is out of 100

    // Displaying results
    printf("\nTotal Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;



    }
