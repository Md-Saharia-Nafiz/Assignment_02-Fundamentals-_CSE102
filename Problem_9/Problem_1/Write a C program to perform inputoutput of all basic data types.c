#include <stdio.h>

int main() {
    // Variable declarations
    char c;                // char type
    int i;                 // int type
    float f;               // float type
    double d;              // double type
    long l;                // long type
    short s;               // short type

    // Input for char type
    printf("Enter a character: ");
    scanf("%c", &c);  // Using %c to input a single character

    // Input for int type
    printf("Enter an integer: ");
    scanf("%d", &i);   // Using %d to input an integer

    // Input for float type
    printf("Enter a float value: ");
    scanf("%f", &f);   // Using %f to input a float

    // Input for double type
    printf("Enter a double value: ");
    scanf("%lf", &d);  // Using %lf to input a double

    // Input for long type
    printf("Enter a long integer: ");
    scanf("%ld", &l);  // Using %ld to input a long integer

    // Input for short type
    printf("Enter a short integer: ");
    scanf("%hd", &s);  // Using %hd to input a short integer

    // Output for all types
    printf("\nYou entered:\n");
    printf("Character: %c\n", c);
    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Double: %.2f\n", d);
    printf("Long integer: %ld\n", l);
    printf("Short integer: %hd\n", s);

    return 0;
}
