#include <stdio.h>

/* Rewrite the temperature conversion program of
Section 1.2 to use a function for conversion. */

float convert(float c);

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;

    celsius = upper;
    printf("Temperature Conversion\n");
    printf("  C    F\n");
    while (celsius >= lower) {
        fahr = convert(celsius);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius - step;
    }
}

float convert(float celsius) {
    float fahr = celsius * (9.0 / 5.0) + 32.0;
    return fahr;
}